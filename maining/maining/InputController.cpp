#include "InputController.h"

int InputController::ChooseInput(vector<string> variants) {
	for (int i = 0; i < variants.size(); i++) {
		cout << i + 1 << ")" << variants[i] << endl;
	}
	cout << "Choose: ";
	int choose;
	cin >> choose;	
	return choose;
}
