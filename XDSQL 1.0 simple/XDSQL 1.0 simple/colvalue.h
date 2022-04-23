#pragma once
#ifndef _COLVALUE_H
#define _COLVALUE_H

#pragma comment(lib,"tableNode.lib")
#include "tableNode.h"
#include <string>



/*****************************************************************************
* @author  : Jiajun Chang,Hongguang Zhao                                                             *
* @date    :
* @file    :
* @brief   : �����SQL�����õ��е�ֵ(����insert table),�̳���tableNode��
*****************************************************************************/
class colvalue : public colNode{
public:


	/*****************************************************************************
	* @name    : getData
	* @input   :
	* @output  :
	* @brief   : ���ֽ�����ת��Ϊ��Ӧ��string��digits
	*****************************************************************************/
	void getData(char* bytearray);




	/*****************************************************************************
	* @name    : getStringValue
	* @input   :
	* @output  :
	* @brief   : ��ȡ�ַ�����ֵ
	*****************************************************************************/
	string getStringValue();

	void setStringValue(string strval);



	/*****************************************************************************
	* @name    : getDigitsValue
	* @input   :
	* @output  :
	* @brief   : ��ȡ������ֵ
	*****************************************************************************/
	int getDigitsValue();

	void setDigitsValue(int digitsval);




	/*****************************************************************************
	* @name    : setIndex
	* @input   :
	* @output  :
	* @brief   : ����index��Ա
	*****************************************************************************/
	void setIndex(int index);

	int getIndex();


	/*****************************************************************************
	* @name    : toByte
	* @input   :
	* @output  :
	* @brief   : ��дtoByte()������������ֵ��Ӧ���ֽ�����
	*****************************************************************************/
	char* toByte();


	/*��¼Ԫ���и����Ƿ�ΪNULL*/
	bool isNULL;


private:
	/*�ַ�����ֵ*/
	string strval;
	/*������ֵ*/
	int digitsval;
	/*�����ڸñ���ֽ������е���ʼλ��*/
	int index;
	
};


#endif

