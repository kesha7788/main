#include "UIControllerHEAD.h"

void UIController::Print(string out) {
	cout << out << endl;
}
void UIController::PrintMas(vector<string> mas){
	for (int i = 0; i < mas.size(); i++) {
		cout << mas[i] << " ";
	}
}