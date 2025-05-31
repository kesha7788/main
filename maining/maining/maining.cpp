#include "links.h"

int main()
{
    /*string name = "HUH";
    UIController uicontroler;
    uicontroler.Print(name);
    vector<string> s{ "1", "1", "1", "1", "1" };
    uicontroler.PrintMas(s);
    cout << endl;
    InputController inputcontroller;
    inputcontroller.*/
    setlocale(0, "rus");
    string Enter, help;
    help = "1.Help - Shows functions\n\
2.Break - Turns off the program \n\
3.Clear - Clear console \n\
4.Calculator - Simple calculator\n";
    cout << "Available functions: " << endl << help << endl;
    //example: else if (Enter == "" || Enter == "") {}
    while (Enter != "break" || Enter != "Break") {
        cout << "Enter: ";
        cin >> Enter;
        cout << endl;
        if (Enter == "Help" || Enter == "help" || Enter == "HELP" || Enter == "1") { cout << "Help: " << endl << help << endl; }
        else if (Enter == "Clear" || Enter == "clear" || Enter == "CLEAR" || Enter == "2") { system("cls"); }
        else if (Enter == "exit" || Enter == "Exit" || Enter == "EXIT") { break; }
        else if (Enter == "Calculator" || Enter == "calculator" || Enter == "4") {
            system("cls");
            cout << "Calculator:" << endl;
            cout << "if you want to exit calculator mode then write: break" << endl;
            Calculator calc;
            string line;
            while (true) {
                cout << "Enter an example: ";
                getline(cin, line);
                if (line == "exit" || line == "Exit" || line == "EXIT") { break; }
                double num1, num2, result;
                char operation;
                istringstream ss(line);
                if (ss >> num1 >> operation >> num2) {
                    result = calc.calculate(num1, operation, num2);
                    cout << num1 << " " << operation << " " << num2 << " = " << result << endl << endl;
                }
            }
        } 

        else { cout << "This function is not yet available!" << endl << "Try the available features: " << endl << help << endl; }
    };
    return 0;
}