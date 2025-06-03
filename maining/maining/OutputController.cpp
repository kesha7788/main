#include "OutputController.h"
void OutputController::PrintImage(vector<vector<int>> mas) {
	for (int i = 0; i < mas.size(); i++) {
		for (int j = 0; j < mas[i].size(); i++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}