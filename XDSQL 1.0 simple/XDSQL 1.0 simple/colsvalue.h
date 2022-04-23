#pragma once
#ifndef _COLSVALUE_H
#define _COLSVALUE_H

#pragma comment(lib,"colvalue.lib")
#pragma comment(lib,"MetaDataManager.lib")

#include <vector>
#include "colvalue.h"
#include "MetaDataManager.h"

/*****************************************************************************
* @author  : Jiajun Chang,Hongguang Zhao                                                             *
* @date    :
* @file    :
* @brief   :
*****************************************************************************/
class colsvalue {
public:
	/*�������е�ֵ*/
	std::vector<colvalue*> vec;


	/*����select table,��Ϊtrue��˵����select* from tbale */
	bool isALL;


	void setRowLength(int rowlength);

	

	/*****************************************************************************
	* @name    : colsvalue
	* @input   : 
	* @output  : 
	* @brief   : �޲ι��캯��
	*****************************************************************************/
	colsvalue();



	/*****************************************************************************
	* @name    : colsvalue
	* @input   :
	* @output  :
	* @brief   : ͨ����Ԫ����tablecol������Ӧ��colvalue(��Ҫ���ڴ���dataarray)
	*****************************************************************************/
	colsvalue(vector<colNode*> tablecol);





	/*****************************************************************************
	* @name    : addCols
	* @input   :
	* @output  :
	* @brief   : ������Ԫ�������Ӷ�Ӧ��colvalue(���ڶ�����Ӻʹ���dataarray)
	*****************************************************************************/
	void addCols(vector<colNode*> tablecol);



	/*****************************************************************************
	* @name    : setIndex
	* @input   :
	* @output  :
	* @brief   : ����Ԫ���ݹ���������cols�и��������ݵ�inedx��Ա
	*****************************************************************************/
	void setIndex(MetaDataManager* mdm,string dbname,string tablename);


	/*****************************************************************************
	* @name    : toByte
	* @input   :
	* @output  :
	* @brief   : ��ȡ��Щ�ж�Ӧ��Ԫ����ֽ�����(��Ҫ�Ȱ���Ԫ���ݲ�������)
	*****************************************************************************/
	char* toByte();




	/*****************************************************************************
	* @name    : link2MetaData
	* @input   : ��Ԫ����
	* @output  :
	* @brief   : ����Ԫ���ݰ󶨵�vec�е�colvalue������
	*****************************************************************************/
	void link2MetaData(vector<colNode*> tablecol);



	/*****************************************************************************
	* @name    : setCols
	* @input   :
	* @output  :
	* @brief   : ���ӱ��ж�ȡ���ֽ�����ת��Ϊÿһ�е�ֵ,ֻ�ܴ���һ����
	*****************************************************************************/
	void setCols(char* row,MetaDataManager* mdm,string dbname,string tablename);




	/*****************************************************************************
	* @name    : toByte
	* @input   :
	* @output  :
	* @brief   : rowΪ�ɵ���,ʹ��vec�еĸ���ֵ����row
	*****************************************************************************/
	char* toByte(char* row, MetaDataManager* mdm, string dbname, string tablename);



	/*****************************************************************************
	* @name    : ~colsvalue
	* @input   :
	* @output  :
	* @brief   : ��������(ȡ���ͷ��ڴ���,����ʹ�ø����ʱ���ֶ��ͷ�,������select table
				 ģ������һ���ڴ汻����ͷŵĴ���)
	*****************************************************************************/
	~colsvalue();


private:
	int rowlength;		/*����Ԫ��ĳ���(������־λ���ַ���Ԥ��һλ)*/

};

#endif

