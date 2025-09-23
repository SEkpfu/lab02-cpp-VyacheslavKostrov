#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double x, y, z, a, b;
    cout << "Введите длину кирпича: "; cin >> x;
    cout << "Введите ширину кирпича: "; cin >> y;
    cout << "Введите высоту кирпича: "; cin >> z;
    cout << "Введите длину прямоугольного отверстия: "; cin >> a;
    cout << "Введите ширину прямоугольного отверстия: "; cin >> b;

    if (((x <= a && y <= b) || (x <= b && y <= a)) && (z <= a && z <= b)) {
        cout << "Такой кирпич пройдёт" << endl;
    }
    else {
        cout << "Такой кирпич не пройдёт" << endl;
    }

    return 0;
}
