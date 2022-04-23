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

extern int yylex(void);
void yyerror(const char* );
%}


%union{
	/*ID,string,������������ֵ*/
	class values* value;
	/*��������Ԫ���ݵ�ֵ*/
	class colinf* single_colinf;
	/*����е���Ԫ����*/	
	class colsinf* colsinf;
	/*�е�ֵ*/
	class colvalue* colval;
	/*����е�ֵ*/
	class colsvalue* colsval;
	/*�������ʽ��ֵ*/
	int calval;
	/*�������ʽ��ֵ*/
	class condition* cond;
	/*�Ƚϱ��ʽ��,�Ҳ��ֵ�ֵ*/
	class conditiontype* comp;
}




/*�ս��*/
%token CREATE USE SHOW DROP DATABASE DATABASES TABLE TABLES INSERT INTO VALUES 
%token FROM WHERE SET UPDATE SELECT EXIT
%token NEWLINE CHAR INT 
%token<value> ID STRING NUMBER
%token ',' ';' '.'


/*���ս��*/
%type<value> dbname tablename colname 
%type<single_colinf> col coltype
%type<colsinf> cols 
%type<colval> colvalue setconf
%type<colsval> colsvalue colsname tablecols setconfs tables tablecolconf



/*�ķ�����ʽ*/
%%
start : line	{}
	  | start line	{}
;
line  : NEWLINE	{cout<<endl<<"SQL>>";}
	  | statement NEWLINE	{cout<<endl<<"SQL>>";}
	 ;


statement : createdb{}
		  | usedb{}
		  | showdb{}
		  | dropdb{}
		  | createsql{}
		  | droptable {}
		  | showtables	{}
		  | inserttable	{}
		  | deletetable	{}
		  | updatetable	{}
		  | selecttable	{}
		  | exit	{}
;

exit : EXIT		{ return 0;}
;

/*�������ݿ�*/
createdb : CREATE DATABASE dbname ';'	{
	QueryProcessor qp;
	qp.createDB($3->getStringValue());}
;

/*ʹ�����ݿ�*/
usedb : USE DATABASE dbname ';'	{
	QueryProcessor qp;
	qp.useDB($3->getStringValue());
}
;

/*չʾ��Ԫ����*/
showdb : SHOW DATABASES ';'		{
	QueryProcessor qp;
	qp.showDB();
}
;

/*ɾ�����ݿ�*/
dropdb : DROP DATABASE dbname ';'	{
	QueryProcessor qp;
	qp.dropDB($3->getStringValue());
}
;

dbname : ID		{	$$=$1;	}
;




/*������*/
createsql : CREATE TABLE tablename '(' cols ')' ';'		{
	QueryProcessor qp;
	qp.createTable($3->getStringValue(),$5->vec);
}
;

tablename : ID	{$$=$1;}
;

cols : col	{
	$$=new colsinf();
	($$->vec).push_back($1);
	 }
	 | cols ',' col		{
	 $$=$1;
	 ($$->vec).push_back($3);
	 }
;

col : colname coltype {
	$$=$2;
	$$->setColName($1->getStringValue());
}
;

colname : ID	{$$=$1;}
;

coltype : INT	{
		 $$=new colinf();
		 $$->setColType(3);
		 $$->setColLength(4);
		}
		| CHAR '(' NUMBER ')'	{
		 $$=new colinf();
		 $$->setColType(2);
		 $$->setColLength($3->getDigitsValue());
		}
;

/*ɾ����*/
droptable : DROP TABLE tablename ';'	{
	QueryProcessor qp;
	qp.dropTable($3->getStringValue());
}
;

/*չʾ���ݿ��еı�Ԫ���ݺ���Ԫ����*/
showtables : SHOW TABLES ';'		{
	QueryProcessor qp;
	qp.showTable();
}
;




/*��Ԫ������*/
inserttable : INSERT INTO tablename VALUES '(' colsvalue ')' ';'	{
	QueryProcessor qp;
	qp.insertTable($3->getStringValue(),*$6,1);
}
			| INSERT INTO tablename '(' colsname ')' VALUES '(' colsvalue ')' ';'	{
	/*�Ƚ�colsename�еı������μ���colsname��������*/
	for(int i=0;i<$9->vec.size();i++){
		$9->vec[i]->setColName($5->vec[i]->getColName());
	}
	/*�ͷ�colsname���ڴ�*/
	delete $5;

	QueryProcessor qp;	
	qp.insertTable($3->getStringValue(),*$9,2);
}
;

colsname : colname	{
	$$=new colsvalue();
	string str=$1->getStringValue();
	colvalue* cv=new colvalue();
	cv->setColName(str);
	($$->vec).push_back(cv);
}
		 | colsname ',' colname{
	string str=$3->getStringValue();
	colvalue* cv=new colvalue();
	cv->setColName(str);
	$$=$1;
	($$->vec).push_back(cv);
}

colsvalue : colvalue		{
	$$=new colsvalue();
	($$->vec).push_back($1);
}
		  | colsvalue ',' colvalue	{
	$$=$1;
	($$->vec).push_back($3);   
}
;

colvalue : cal	{
	$$=new colvalue();
	$$->setColType(3);
	$$->setDigitsValue($1);
}
		 | STRING	{
	$$=new colvalue();
	$$->setColType(2);
	$$->setStringValue($1->getStringValue());
}
;

/*�������ʽ*/






/*�߼����ʽ*/

 
/*�Ƚϱ��ʽ*/


/*�Ƚ������*/


/*����.������ʽ��������ʽ*/







/*ɾ��Ԫ��*/





/*����Ԫ��*/
updatetable : UPDATE tablename SET setconfs ';'		{
	QueryProcessor qp;
	qp.updateTable($2->getStringValue(),*$4,NULL);
}
			| UPDATE tablename SET setconfs WHERE conditions ';'	{
	QueryProcessor qp;		
	qp.updateTable($2->getStringValue(),*$4,$6);
}
;

/*���¸�ֵ�����*/
setconfs : setconf	{
	$$=new colsvalue();
	($$->vec).push_back($1);
}
		 | setconfs ',' setconf		{
	$$=$1;
	($$->vec).push_back($3);	 
}
;

setconf : tablecol '=' STRING	{
	$$=$1->col;
	$$->setStringValue($3->getStringValue());
}
		| tablecol '=' cal	{
	$$=$1->col;
	$$->setDigitsValue($3);
}
;

/*�����������.������ʽ*/
tablecols : tablecol	{
	$$=new colsvalue();
	($$->vec).push_back($1->col);
}
		  | tablecols ',' tablecol	{
	$$=$1;
	($$->vec).push_back($3->col);	  
}
;





/*select table*/
selecttable : SELECT tablecolconf FROM tables ';'	{
	QueryProcessor qp;
	qp.selectTable(*$4,*$2,NULL);
}
			| SELECT tablecolconf FROM tables WHERE conditions ';'	{
	QueryProcessor qp;
	qp.selectTable(*$4,*$2,$6);		
}
;

tablecolconf : '*'	{
	$$=new colsvalue();
	$$->isALL=true;
}
			 | tablecols	{
	$$=$1;				
}
;

tables : tablename	{
	$$=new colsvalue();
	colvalue* cv=new colvalue();
	cv->setTableName($1->getStringValue());
	($$->vec).push_back(cv);
}
	   | tables ',' tablename	{
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