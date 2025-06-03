#include "FileManage.h"

FileManage::FileManage(string path) {
	this->path = path;
}

string FileManage::Read() {
	fstream f;
	f.open(path, ios::in);
	string data;
	f >> data;
	return data;
}


