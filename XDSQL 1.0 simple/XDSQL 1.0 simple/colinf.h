#pragma once
#ifndef _COLINF_H
#define _COLINF_H
#include <string>
using namespace std;


/*****************************************************************************
* @author  : Jiajun Chang,Hongguang Zhao                                                             *
* @date    :
* @file    :
* @brief   : ����sql�����л�ȡ����Ԫ����
*****************************************************************************/
class colinf {
public:

	/*****************************************************************************
	* @name    : colinf
	* @input   :
	* @output  :
	* @brief   : Ĭ�Ϲ��캯��
	*****************************************************************************/
	colinf();

	

	/*****************************************************************************
	* @name    : colinf
	* @input   :
	* @output  :
	* @brief   : ���캯��
	*****************************************************************************/
	colinf(std::string colname,int coltype,int collength);

	


	/*****************************************************************************
	* @name    : getColName
	* @input   :
	* @output  :
	* @brief   :
	*****************************************************************************/
	string  getColName();

	void setColName(string colname);



	/*****************************************************************************
	* @name    : getColType
	* @input   :
	* @output  :
	* @brief   :
	*****************************************************************************/
	int getColType();

	void setColType(int coltype);


	/*****************************************************************************
	* @name    : getColLength
	* @input   :
	* @output  :
	* @brief   :
	*****************************************************************************/
	int getColLength();

	void setColLength(int collength);

private:
	std::string colname;	/*����*/
	int coltype;			/*�е���������,2--string,3--digits*/
	int collength;			/*�еĳ���(���߼�ģʽ����)*/
};


#endif

