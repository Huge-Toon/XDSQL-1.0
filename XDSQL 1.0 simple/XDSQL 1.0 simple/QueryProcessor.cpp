#include "QueryProcessor.h"

void QueryProcessor::deleteTable(string tablename, condition* root) {
	if (usedatabase.empty()) {
		std::cout << "error: not use a database\n" << std::endl;
		return;
	}

	if ((mdm->selectDBTable(usedatabase, tablename)).size() == 0) {
		std::cout << tablename + " is not Exist, delete from table error\n" << std::endl;
		return;
	}



	/*无条件删除*/
	if (root == NULL) {
		root->addTableName(tablename);
		int rowlength = (mdm->selectDBTable(usedatabase, tablename))[0]->getRowLength();
		StorageNode sn(SQLFILE + usedatabase + "/" + tablename + ".dat", rowlength);
		while (!sn.isEOF()) {
			char* row = sn.rnd_next();
			if (row == NULL)	continue;	/*row为NULL说明该行无效，跳过*/
			sn.delete_row();
		}
	}
	/*条件删除*/
	else {
		/*将表名加入生成树的相关节点*/
		root->addTableName(tablename);
		/*创建colsvalue对象，使用其中的vec成员作为dataarray数组*/
		colsvalue cols(mdm->selectTableCol(usedatabase, tablename, ""));
		vector<colvalue*>& dataarray = cols.vec;

		/*将生成树与dataarray绑定*/
		conditionLinkData(dataarray, root);
		/*打开文件，逐个读取元组，并更新dataarray中每个元素的列值*/
		int rowlength = (mdm->selectDBTable(usedatabase, tablename))[0]->getRowLength();
		StorageNode sn(SQLFILE + usedatabase + "/" + tablename + ".dat", rowlength);
		while (!sn.isEOF()) {
			char* row = sn.rnd_next();
			if (row == NULL)	continue;	/*row为NULL说明该行无效，跳过*/

			cols.setCols(row, mdm, usedatabase, tablename);
			/*判断条件表达式是否成立，然后决定是否删除该元组*/
			auto result = root->dealConditions();
			if (result.first) sn.delete_row();
		}


		/*释放生成树的内存(直接调用delete root即可，已封装了对应的析构函数)*/
		delete root;
	}
}





