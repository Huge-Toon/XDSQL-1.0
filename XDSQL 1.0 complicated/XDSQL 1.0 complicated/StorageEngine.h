#pragma once
#ifndef _STORAGEENGINE_H
#define _STORAGEENGINE_H

#include "define.h"
#include<string>
#include<vector>
//#include<Windows.h>
#include<stdio.h>

using namespace std;


/*****************************************************************************
* @author  : Jiajun Chang,Hongguang Zhao                                                             *
* @date    : 2022/3/30
* @file    : 
* @brief   : �洢�����࣬�ṩ���ļ�ϵͳ�Ĳ���
*****************************************************************************/
class StorageEngine
{
public:	
	/*****************************************************************************
	* @name    : createDBDir
	* @input   : �ļ�����(����·��)
	* @output  : �����ɹ�����true�����򷵻�flase
	* @brief   : �����ļ���
	*****************************************************************************/
	static bool createDBDir(string dirname);



	/*****************************************************************************
	* @name    : deleteDBDir
	* @input   : �ļ�����(����·��)
	* @output  : ɾ���ɹ�����true�����򷵻�flase
	* @brief   : ɾ��ָ�����ļ���
	*****************************************************************************/
	static bool deleteDBDir(string dirname);



	/*****************************************************************************
	* @name    : create
	* @input   : �ļ���(����·��)
	* @output  : �����ɹ�����true�����򷵻�flase
	* @brief   : ���������ļ�
	*****************************************************************************/
	static bool create(string filename);


	/*****************************************************************************
	* @name    : drop
	* @input   : �ļ���(����·��)
	* @output  : ɾ���ɹ�����true�����򷵻�false
	* @brief   : ɾ�������ļ�
	*****************************************************************************/
	static bool drop(string filename);
};







#endif

