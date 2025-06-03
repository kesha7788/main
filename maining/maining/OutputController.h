#pragma once
#include <iostream>
#include <vector>
using namespace std;
class OutputController {
public:
	template <class T>
	void Print(T){}
	void PrintImage(int, int, vector<int>){}

};