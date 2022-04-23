#pragma once
#ifndef _QUERYPROCESSOR_H
#define _QUERYPROCESSOR_H

#pragma comment(lib,"MetaDataManager.lib")
#pragma comment(lib,"StorageEngine.lib")
#pragma comment(lib,"StorageNode.lib")
#pragma comment(lib,"colinf.lib")
#pragma comment(lib,"colsvalue.lib")
#pragma comment(lib,"condition.lib")
#include "MetaDataManager.h"
#include "define.h"
#include "StorageEngine.h"
#include "StorageNode.h"
#include "colinf.h"
#include "colsvalue.h"
#include "condition.h"


/*****************************************************************************
* @author  : Jiajun Chang,Hongguang Zhao                                                             *
* @date    :
* @file    :
* @brief   : ��ѯ����㣬ֱ��ΪSQL�����ṩ����
*****************************************************************************/
class QueryProcessor {
public:

	/*****************************************************************************
	* @name    : init
	* @input   :
	* @output  :
	* @brief   : ��ʼ����̬��Աmdm
	*****************************************************************************/
	static void init(MetaDataManager* mdm);



	/*****************************************************************************
	* @name    : createDB
	* @input   : ���ݿ�����(����·��)
	* @output  : 
	* @brief   : ����һ���µ����ݿ�
	*****************************************************************************/
	void createDB(string dbname);



	/*****************************************************************************
	* @name    : dropDB
	* @input   : ���ݿ�����(����·��)
	* @output  :
	* @brief   : ɾ�����ݿ�
	*****************************************************************************/
	void dropDB(string dbname);




	/*****************************************************************************
	* @name    : useDB
	* @input   : ���ݿ�����(����·��)
	* @output  :
	* @brief   : �л���ǰʹ�õ����ݿ�Ϊ��Ϊdbname�����ݿ�
	*****************************************************************************/
	void useDB(string dbname);




	/*****************************************************************************
	* @name    : showDB
	* @input   :
	* @output  :
	* @brief   : ������ݿ�ϵͳ���������ݿ�����ƺ����ݿ������
	*****************************************************************************/
	void showDB();


		

	/*****************************************************************************
	* @name    : createTable
	* @input   : ����(����·��),������Ԫ���ݵĶ�̬����
	* @output  :
	* @brief   : �ڵ�ǰ���ݿ��д����û����ݱ�
	*****************************************************************************/
	void createTable(string tablename,vector<colinf*> cols);





	/*****************************************************************************
	* @name    : dropTable
	* @input   : �������(����·��)
	* @output  :
	* @brief   : ɾ����ǰ���ݿ�������Ϊtablename���û���
	*****************************************************************************/
	void dropTable(string tablename);




	/*****************************************************************************
	* @name    : showTable
	* @input   :
	* @output  :
	* @brief   : �����ǰ���ݿ��������û���ı�Ԫ���ݺ���Ԫ����
	*****************************************************************************/
	void showTable();




	/*****************************************************************************
	* @name    : insertTable
	* @input   : ��patternΪ1����sql��������������patternΪ2����sql��������
	* @output  :
	* @brief   : ��һ��Ԫ����뵱ǰ���ݿ��µ��û����ݱ�
	*****************************************************************************/
	void insertTable(string tablename,colsvalue cols, int pattern);




	/*****************************************************************************
	* @name    : deleteTable
	* @input   : ����,�������ʽ��Ӧ���������ĸ��ڵ㡣��rootΪNULL����ʹ��������ѯ
	* @output  : 
	* @brief   : ɾ�����ݿ���(��������)����
	*****************************************************************************/
	void deleteTable(string tablename,condition* root);






	/*****************************************************************************
	* @name    : updateTable
	* @input   : ����,�и��º��ֵ,�������ʽ��������
	* @output  :
	* @brief   : ����Ԫ�顣��rootΪNULL,�������е�Ԫ��
	*****************************************************************************/
	void updateTable(string tablename,colsvalue setconf,condition* root);

	



	/*****************************************************************************
	* @name    : selectTable
	* @input   : ��Ϊ��ѯ�������,����ѯ�ı�,�������ʽ��������
	* @output  :
	* @brief   : ��ѯ����rootΪNULL,��ѡ�����е�Ԫ��
	*****************************************************************************/
	void selectTable(colsvalue tables,colsvalue tablecolsconf ,condition* root);



private:
	static MetaDataManager* mdm;		/*Ԫ���ݹ���������*/
	static string usedatabase;		/*��ǰ����ʹ�õ����ݿ������*/




	/*****************************************************************************
	* @name    :
	* @input   :
	* @output  :
	* @brief   : ��dataarray����ʽ������������������
	*****************************************************************************/
	void conditionLinkData(vector<colvalue*>& dataarray,condition* root);





	/*****************************************************************************
	* @name    : tableJoin
	* @input   : ��ʱ����һ�еĳ���
	* @output  :
	* @brief   : ΪselectTable()�ṩ����
	*****************************************************************************/
	void tableJoin(vector<colvalue*> tables, int temp_rowlength);




	/*****************************************************************************
	* @name    :
	* @input   : index:���˳��(��0��ʼ)	row:������ʱ��Ԫ����ֽ�����
	*			 start:��ǰ����д��row����ʼλ��
	* @output  : 
	* @brief   : ��tables�еı�˳����еѿ���������,�����浽��ʱ��tamp.dat��
	*****************************************************************************/
	void tableJoin(vector<colvalue*> tables,int index,char* row, int start);
	




	/*****************************************************************************
	* @name    : dropTempTable
	* @input   :
	* @output  :
	* @brief   : ɾ����ʱ��������ļ�
	*****************************************************************************/
	void dropTempTable();

};



#endif