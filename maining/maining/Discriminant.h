float discrimenant(float a, float b, float c) {
    int dis = 0, s = 0, d = 10; float x1, x2;
    dis = b * b - 4 * a * c;
    if (dis == 0) {
        d = 1;
    }
    else if (dis < 0) {
        d = 0;
    }
    else {
        for (int i = 0; i < dis; i++) {
            s = i * i;
            if (s == dis) {
                d = i + 1;
                break;
            }
            else {
                d = 2;
            }
            s = 0;
        }
    }
    return d;
}

void Discriminant() {
    float a, b, c, d, x1{}, x2{}, s, dis, e = 0;
    cout << "������� �: ";
    cin >> a;
    cout << "������� b: ";
    cin >> b;
    cout << "������� c: ";
    cin >> c;
    d = discrimenant(a, b, c);
    dis = b * b - 4 * a * c;
    x1 = ((0 - b) + (d - 1)) / (2 * a);
    x2 = ((0 - b) - (d - 1)) / (2 * a);
    if (d == 0) {
        cout << "������������ < 0, ������ ���!";
    }
    else if (d == 1) {
        cout << "������������ = 0, ���� ������" << "\n" << "������: " << x1;
    }
    else if (d == 2) {
        cout << "������������: " << dis << "\n" << "������ �� ������������� �� �����������" << "\n";
    }
    else {
        cout << "������������ > 0, ��� �����" << "\n" << "������������: " << dis << "\n" << "������ �������������: " << d - 1 << "\n" << "������ ������: " << x1 << "\n" << "������ ������: " << x2 << "\n";
    }
    cout << endl;
}





