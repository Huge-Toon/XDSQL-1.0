#pragma once
#ifndef _COLSINF_H
#define _COLSINF_H

#pragma comment(lib,"colinf.lib")
#include <vector>
#include "colinf.h"




/*****************************************************************************
* @name    : colsinf
* @input   :
* @output  :
* @brief   : ʹ�ö�̬���鴢����е���Ԫ����
*****************************************************************************/
class colsinf {
public:

	/*****************************************************************************
	* @name    : ~colsinf
	* @input   :
	* @output  :
	* @brief   : ��������
	*****************************************************************************/
	~colsinf();



	std::vector<colinf*> vec;
};

#endif

