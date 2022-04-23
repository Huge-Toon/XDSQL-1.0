#pragma once
#ifndef _CONDITIONTYPE_H
#define _CONDITIONTYPE_H

#pragma comment(lib,"colvalue.lib")
#include "colvalue.h"
class condition;		/*���������(����ֱ������ͷ�ļ��������ѭ������)*/


/*****************************************************************************
* @author  : Jiajun Chang,Hongguang Zhao                                                             *
* @date    :
* @file    :
* @brief   : �����������ʽ��/�Ҳ��ֵ��������ͺ�ֵ
*****************************************************************************/
class conditiontype {
public:
	/*��/�Ҳ��ֵ���������,1--[����.]����,2--STRING,3--INT,4--�������ʽ*/
	int type;
	colvalue* col;		/*[����.]����,��SQL���淵�غ�Ҫ�������һ������*/
	string str;			/*�ַ�����ֵ*/
	int digits;			/*���ֵ�ֵ*/
	condition* cond;	/*���ָ��*/
};


#endif

