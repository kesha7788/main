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
    cout << "Введите а: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    d = discrimenant(a, b, c);
    dis = b * b - 4 * a * c;
    x1 = ((0 - b) + (d - 1)) / (2 * a);
    x2 = ((0 - b) - (d - 1)) / (2 * a);
    if (d == 0) {
        cout << "Дискриминант < 0, корней нет!";
    }
    else if (d == 1) {
        cout << "Дискриминант = 0, один корень" << "\n" << "Корень: " << x1;
    }
    else if (d == 2) {
        cout << "Дискриминант: " << dis << "\n" << "Корень из дискриминанта не извлекается" << "\n";
    }
    else {
        cout << "Дискриминант > 0, два корня" << "\n" << "Дискриминант: " << dis << "\n" << "Корень дискриминанта: " << d - 1 << "\n" << "Первый корень: " << x1 << "\n" << "Второй корень: " << x2 << "\n";
    }
    cout << endl;
}





