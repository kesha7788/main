void clearInputBuffer();
double calculate(double a, char op, double b) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/':
        if (b != 0) return a / b;
        else { cout << "Ошибка: деление на ноль!(Error: division by zero!)" << endl; return 0; }
    default:
        cout << "Неверная операция!(Incorrect operation!)" << op << endl;
        return 0;
    }
}

void Calculator() {
    system("cls");
    cout << "Calculator:" << endl;
    cout << "if you want to clear the console write: Clear" << endl;
    cout << "if you want to exit Calculator mode then write: Exit" << endl << endl;
    string line;
    clearInputBuffer();
    while (true) {
        cout << "Enter an example: ";
        getline(cin, line);
        if (line == "Clear" || line == "clear" || line == "CLEAR" || line == "1") { system("cls"); }
        else if (line == "exit" || line == "Exit" || line == "EXIT" || line == "2") { system("cls"); break; }
        else {
            double num1, num2, result;
            char operation;
            istringstream ss(line);
            if (ss >> num1 >> operation >> num2) {
                result = calculate(num1, operation, num2);
                cout << num1 << " " << operation << " " << num2 << " = " << result << endl << endl;
            }
            else {
                cout << "Incorrect operation!" << endl << endl;
            }
        }
    }
}