#pragma once
#ifndef _VALUES_H
#define _VALUES_H

#include <string>
using namespace std;


/*****************************************************************************
* @author  : Jiajun Chang,Hongguang Zhao
* @date    :
* @file    :
* @brief   : ����id,string��������������ֵ
*****************************************************************************/
class values {
public:
	/*****************************************************************************
	* @name    : values
	* @input   : �ս�����ͣ������ս�����Ե��ַ���
	* @output  :
	* @brief   : ���캯��
	*****************************************************************************/
	values(int type, char* array);



	int getValueType();
	int getValueSize();
	string getStringValue();
	int getDigitsValue();
private:

	/*�ս��������,1-id,2-string,3-digits*/
	int type;
	/*�ս����ֵ*/
	string strval;
	int digitsval;
	/*ֵ���ڴ��еĳ���*/
	int size;


};


#endif
