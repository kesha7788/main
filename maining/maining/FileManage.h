#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class FileManage {
	string path;
public:
	FileManage(string);
	

	string Read();

	void Write(string);

};