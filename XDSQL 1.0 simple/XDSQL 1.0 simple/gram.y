%{
#pragma comment(lib,"QueryProcessor_simple.lib")
#pragma comment(lib,"values.lib")
#pragma comment(lib,"colinf.lib")
#pragma comment(lib,"colsinf.lib")
#pragma comment(lib,"colvalue.lib")
#pragma comment(lib,"colsvalue.lib")
#pragma comment(lib,"condition.lib")
#pragma comment(lib,"conditiontype.lib")
#include "QueryProcessor.h"
#include "values.h"
#include "colinf.h"
#include "colsinf.h"
#include "colvalue.h"
#include "colsvalue.h"
#include "condition.h"
#include "conditiontype.h"
#include "gram.tab.h"

extern int yylex(void);
void yyerror(const char* );
%}


%union{
	/* ID,string,数字字面量的值 */
	class values* value;
	/* 单个列列元数据的值 */
	class colinf* single_colinf;
	/* 多个列的列元数据 */	
	class colsinf* colsinf;
	/* 列的值 */
	class colvalue* colval;
	/* 多个列的值 */
	class colsvalue* colsval;
	/* 算数表达式的值 */
	int calval;
	/* 条件表达式的值 */
	class condition* cond;
	/* 比较表达式左,右部分的值 */
	class conditiontype* comp;
}




/* 终结符 */
%token CREATE USE SHOW DROP DELETE DATABASE DATABASES TABLE TABLES INSERT INTO VALUES 
%token FROM WHERE SET UPDATE SELECT EXIT
%token NEWLINE CHAR INT 
%token<value> ID STRING NUMBER
%token ',' ';' '.'


/* 非终结符 */
%type<value> dbname tablename colname 
%type<single_colinf> col coltype
%type<colsinf> cols 
%type<colval> colvalue setconf
%type<colsval> colsvalue colsname tablecols setconfs tables tablecolconf
%type<calval> cal comp_op
%type<cond> conditions condition
%type<comp> tablecol comparator

/* 算术运算符优先级 */
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

/* 比较运算符优先级 */
%left OR
%left AND
%left NOT

/* 文法产生式 */
%%
start : line				{}
	  | start line			{}
      ;
line  : NEWLINE				{cout<<endl<<"SQL>>";}
	  | statement NEWLINE	{cout<<endl<<"SQL>>";}
	  ;

statement : createdb		{}
		  | usedb			{}
		  | showdb			{}
		  | dropdb			{}
		  | createsql		{}
		  | droptable		{}
		  | showtables		{}
		  | inserttable		{}
		  | deletetable		{}
		  | updatetable		{}
		  | selecttable		{}
		  | exit			{}
;

exit : EXIT		{ return 0;}
;

/* 创建数据库 */
createdb : CREATE DATABASE dbname ';'					{
															QueryProcessor qp;
															qp.createDB($3->getStringValue());
														}
;

/* 使用数据库 */
usedb : USE DATABASE dbname ';'							{
															QueryProcessor qp;
															qp.useDB($3->getStringValue());
														}
;

/* 展示库元数据 */
showdb : SHOW DATABASES ';'								{
															QueryProcessor qp;
															qp.showDB();
														}
;

/* 删除数据库 */
dropdb : DROP DATABASE dbname ';'						{
															QueryProcessor qp;
															qp.dropDB($3->getStringValue());
														}
;

dbname : ID												{	$$=$1;	}
;




/* 创建表 */
createsql : CREATE TABLE tablename '(' cols ')' ';'		{
															QueryProcessor qp;
															qp.createTable($3->getStringValue(),$5->vec);
														}
;

tablename : ID											{	$$=$1;	}
;

cols :		col											{
															$$=new colsinf();
															($$->vec).push_back($1);
														}
			| cols ',' col								{
															$$=$1;
															($$->vec).push_back($3);
														}
;

col : colname coltype									{
															$$=$2;
															$$->setColName($1->getStringValue());
														}
;

colname : ID											{	$$=$1;	}
;

coltype : INT											{
															$$=new colinf();
															$$->setColType(3);
															$$->setColLength(4);
														}
		| CHAR '(' NUMBER ')'							{
															$$=new colinf();
															$$->setColType(2);
															$$->setColLength($3->getDigitsValue());
														}
;

/* 删除表 */
droptable : DROP TABLE tablename ';'					{
															QueryProcessor qp;
															qp.dropTable($3->getStringValue());
														}
;

/* 展示数据库中的表元数据和列元数据 */
showtables : SHOW TABLES ';'							{
															QueryProcessor qp;
															qp.showTable();
														}
;



/* 将元组插入表 */
inserttable : INSERT INTO tablename VALUES '(' colsvalue ')' ';'					{
																						QueryProcessor qp;
																						qp.insertTable($3->getStringValue(), *$6, 1);
																					}
			| INSERT INTO tablename '(' colsname ')' VALUES '(' colsvalue ')' ';'	{
																						/* 先将colsname中的表名依次加入colsname的容器中 */
																						for(int i=0;i<$9->vec.size();i++){
																							$9->vec[i]->setColName($5->vec[i]->getColName());
																						}
																						/* 释放colsname的内存 */
																						delete $5;

																						QueryProcessor qp;	
																						qp.insertTable($3->getStringValue(), *$9, 2);
																					}
;

colsname : colname																	{
																						$$=new colsvalue();
																						string str=$1->getStringValue();
																						colvalue* cv=new colvalue();
																						cv->setColName(str);
																						($$->vec).push_back(cv);
																					}
		 | colsname ',' colname														{
																						string str=$3->getStringValue();
																						colvalue* cv=new colvalue();
																						cv->setColName(str);
																						$$=$1;
																						($$->vec).push_back(cv);
																					}

colsvalue : colvalue																{
																						$$=new colsvalue();
																						($$->vec).push_back($1);
																					}
		  | colsvalue ',' colvalue													{
																						$$=$1;
																						($$->vec).push_back($3);   
																					}
;

colvalue : cal																		{
																						$$=new colvalue();
																						$$->setColType(3);
																						$$->setDigitsValue($1);
																					}
		 | STRING																	{
																						$$=new colvalue();
																						$$->setColType(2);
																						$$->setStringValue($1->getStringValue());
																					}
;

/* 算术表达式 */
cal : cal '+' cal																	{	$$=$1*$3;	}
	 |cal '-' cal																	{	$$=$1-$3;	}
	 |cal '*' cal																	{	$$=$1*$3;	}
	 |cal '/' cal																	{	$$=$1/$3;	}
	 |'(' cal ')'																	{	$$=$2;		}
	 |'-' cal %prec UMINUS															{	$$=-$2;		}
	 |NUMBER																		{	$$=$1->getDigitsValue();}		
;


/* 逻辑表达式 */
conditions : conditions AND conditions												{	
																						/* 创建一个新的condition节点作为生成树的根节点 */
																						$$=new condition();

																						/* 设置根节点的iscond等成员变量 */
																						$$->iscond=true;
																						$$->comp_cond=1;
																						/* 将AND左右的两个表达式作为子女节点加入生成树 */
																						$$->left.type=4;
																						$$->right.type=4;
																						$$->left.cond=$1;
																						$$->right.cond=$3;
																					}
			 |conditions OR conditions												{	
																						/* 创建一个新的condition节点作为生成树的根节点 */
																						$$=new condition();

																						/* 设置根节点的iscond等成员变量 */
																						$$->iscond=true;
																						$$->comp_cond=2;

																						/* 将AND左右的两个表达式作为子女节点加入生成树 */
																						$$->left.type=4;
																						$$->right.type=4;
																						$$->left.cond=$1;
																						$$->right.cond=$3;
																					}
			 |NOT conditions														{	
																						/* 创建一个新的condition节点作为生成树的根节点 */
																						$$=new condition();

																						/* 设置根节点的iscond等成员变量 */
																						$$->iscond=true;
																						$$->comp_cond=3;

																						/* 将AND左右的两个表达式作为子女节点加入生成树 */
																						$$->left.type=4;
																						$$->right.type=4;

																						/* 对于产生式右部为NOT conditions的情况，生成树的根节点的左子女节点为空 */
																						$$->left.cond=NULL;
																						$$->right.cond=$2;
																					}
			 |condition																{	$$=$1;	}
			 |'(' conditions ')'													{	$$=$2;	}
;

/* 比较表达式 */
condition : comparator comp_op comparator											{
																						$$=new condition();
																						$$->iscond=false;
																						$$->comp_op=$2;
																						$$->left =*$1;
																						$$->right =*$3;
																					}
;

comparator : cal																	{	
																						$$=new conditiontype();
																						$$->type=3;
																						$$->digits=$1;
																					}
			|STRING																	{		
																						$$=new conditiontype();
																						$$->type=2;
																						$$->str=$1->getStringValue();
																					}
			|tablecol																{
																						$$=$1;
																					}

/* 比较运算符 */
comp_op :	 '<'																	{	$$=1;	}
			|'>'																	{	$$=2;	}
			|'<' '='																{	$$=3;	}
			|'>' '='																{	$$=4;	}
			|'='																	{	$$=5;	}
			|'!' '='																{	$$=6;	}
;

/* 表名.列名形式或列名形式 */
tablecol :	tablename '.' colname													{	
																						$$=new conditiontype();
																						$$->type=1;
																						$$->col=new colvalue();
																						$$->col->setColName($3->getStringValue());
																						$$->col->setTableName($1->getStringValue());
																					}
			|colname																{	
																						$$=new conditiontype();
																						$$->type=1;
																						$$->col=new colvalue();
																						$$->col->setColName($1->getStringValue());
																					}
;





/* 删除元组 */
deletetable : DELETE FROM tablename ';'										{
																				QueryProcessor qp;
																				qp.deleteTable($3->getStringValue(),NULL);
																			}
			|DELETE FROM tablename WHERE conditions ';'						{
																				QueryProcessor qp;
																				qp.deleteTable($3->getStringValue(),$5);
																			}



/* 更新元组 */
updatetable : UPDATE tablename SET setconfs ';'								{
																				QueryProcessor qp;
																				qp.updateTable($2->getStringValue(),*$4,NULL);
																			}
			| UPDATE tablename SET setconfs WHERE conditions ';'			{
																				QueryProcessor qp;		
																				qp.updateTable($2->getStringValue(),*$4,$6);
																			}
;

/* 更新赋值的语句 */
setconfs : setconf															{
																				$$=new colsvalue();
																				($$->vec).push_back($1);
																			}
		 | setconfs ',' setconf												{
																				$$=$1;
																				($$->vec).push_back($3);	 
																			}
																			;

setconf : tablecol '=' STRING												{
																				$$=$1->col;
																				$$->setStringValue($3->getStringValue());
																			}
		| tablecol '=' cal													{
																				$$=$1->col;
																				$$->setDigitsValue($3);
																			}
;

/* 纯列名或表名.列名形式 */
tablecols : tablecol														{
																				$$=new colsvalue();
																				($$->vec).push_back($1->col);
																			}
		  | tablecols ',' tablecol											{
																				$$=$1;
																				($$->vec).push_back($3->col);	  
																			}
;





/*select table*/
selecttable : SELECT tablecolconf FROM tables ';'							{
																				QueryProcessor qp;
																				qp.selectTable(*$4,*$2,NULL);
																			}
			| SELECT tablecolconf FROM tables WHERE conditions ';'			{
																				QueryProcessor qp;
																				qp.selectTable(*$4,*$2,$6);		
																			}
;

tablecolconf : '*'															{
																				$$=new colsvalue();
																				$$->isALL=true;
																			}
			 | tablecols													{
																				$$=$1;				
																			}
;

tables : tablename															{
																				$$=new colsvalue();
																				colvalue* cv=new colvalue();
																				cv->setTableName($1->getStringValue());
																				($$->vec).push_back(cv);
																			}
	   | tables ',' tablename												{
																				$$=$1;
																				colvalue* cv=new colvalue();
																				cv->setTableName($3->getStringValue());
																				($$->vec).push_back(cv);
																			}
;



%%




void yyerror(const char* str){
	cout<<std::string(str)<<endl;
}