#pragma once
#include <iostream>
#include <vector>
using namespace std;
class InputController {
public:
	template <class T>
	T SaveInput(T key, string a) {
	cout << "Input " << a << endl;
	T read;
	cin >> read;
	return read;
}
	int ChooseInput(vector<string>);


};