using namespace std;
class Calculator {
public:
    double calculate(double a, char op, double b) {
        switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0) return a / b;
            else { cout << "������: ������� �� ����!(Error: division by zero!)" << endl; return 0; }
        default:
            cout << "�������� ��������!(Incorrect operation!)" << op << endl;
            return 0;
        }
    }
};