#pragma comment(lib,"initSQL.lib")
#pragma comment(lib,"QueryProcessor_simple.lib")
#include "initSQL.h"
#include "QueryProcessor.h"
#include "gram.tab.h"




/* 测试模块 */
int main(void) {
	/* 初始化 */
	MetaDataManager mdm = initSQL::init();
	QueryProcessor::init(&mdm);

	cout << endl << "SQL>>";
	int i = 0;

	while (yyparse() != 0) {}

	return 0;
}