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



	/*������ɾ��*/
	if (root == NULL) {
		root->addTableName(tablename);
		int rowlength = (mdm->selectDBTable(usedatabase, tablename))[0]->getRowLength();
		StorageNode sn(SQLFILE + usedatabase + "/" + tablename + ".dat", rowlength);
		while (!sn.isEOF()) {
			char* row = sn.rnd_next();
			if (row == NULL)	continue;	/*rowΪNULL˵��������Ч������*/
			sn.delete_row();
		}
	}
	/*����ɾ��*/
	else {
		/*��������������������ؽڵ�*/
		root->addTableName(tablename);
		/*����colsvalue����ʹ�����е�vec��Ա��Ϊdataarray����*/
		colsvalue cols(mdm->selectTableCol(usedatabase, tablename, ""));
		vector<colvalue*>& dataarray = cols.vec;

		/*����������dataarray��*/
		conditionLinkData(dataarray, root);
		/*���ļ��������ȡԪ�飬������dataarray��ÿ��Ԫ�ص���ֵ*/
		int rowlength = (mdm->selectDBTable(usedatabase, tablename))[0]->getRowLength();
		StorageNode sn(SQLFILE + usedatabase + "/" + tablename + ".dat", rowlength);
		while (!sn.isEOF()) {
			char* row = sn.rnd_next();
			if (row == NULL)	continue;	/*rowΪNULL˵��������Ч������*/

			cols.setCols(row, mdm, usedatabase, tablename);
			/*�ж��������ʽ�Ƿ������Ȼ������Ƿ�ɾ����Ԫ��*/
			auto result = root->dealConditions();
			if (result.first) sn.delete_row();
		}


		/*�ͷ����������ڴ�(ֱ�ӵ���delete root���ɣ��ѷ�װ�˶�Ӧ����������)*/
		delete root;
	}
}





