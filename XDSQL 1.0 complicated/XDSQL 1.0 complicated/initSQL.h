#pragma once
#ifndef _INITSQL_H
#define _INITSQL_H

#pragma comment(lib,"colNode.lib")
#pragma comment(lib,"dbNode.lib")
#pragma comment(lib,"tableNode.lib")
#pragma comment(lib,"MetaDataManager.lib")
#pragma comment(lib,"StorageEngine.lib")
#pragma comment(lib,"StorageNode.lib")
#include "colNode.h"
#include "dbNode.h"
#include "tableNode.h"
#include "define.h"
#include "MetaDataManager.h"
#include "StorageEngine.h"
#include "StorageNode.h"
#include <io.h>



/*****************************************************************************
* @author  : Jiajun Chang,Hongguang Zhao                                                             *
* @date    : 
* @file    : 
* @brief   : ��ʼ��ģ�飬�����ʼ���ļ�ϵͳ��Ԫ���ݹ�����
*****************************************************************************/
class initSQL {
public:
	/*****************************************************************************
	* @name    : init
	* @input   :
	* @output  :
	* @brief   : ��ʼ��,�����ļ�ϵͳ,Ȼ�󴴽�Ԫ���ݹ���������Ԫ���ݱ������е�����
	*****************************************************************************/
	static MetaDataManager init();


private:
	/*****************************************************************************
	* @name    : mkDir
	* @input   :
	* @output  :
	* @brief   : ����SQLFile�ļ��кͿ�Ԫ���ݱ�
	*****************************************************************************/
	static bool mkDir();
};





#endif
