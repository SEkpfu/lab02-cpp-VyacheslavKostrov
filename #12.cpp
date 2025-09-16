#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int a, b, c;

    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    // a
    int s = 0;
    if (a > 10) s += a;
    if (b > 10) s += b;
    if (c > 10) s += c;
    cout << "Сумма чисел больше 10: " << s << endl;

    // b
    int k = 0;
    if (a % 2 == 0) k++;
    if (b % 2 == 0) k++;
    if (c % 2 == 0) k++;
    cout << "Количество чётных чисел: " << k << endl;

    // c
    int m = a + b + c;
    if (a > b && a > c) m -= a;
    else if (b > a && b > c) m -= b;
    else m -= c;

    if (a < b && a < c) m -= a;
    else if (b < a && b < c) m -= b;
    else m -= c;

    cout << "Среднее число: " << m << endl;

    // d
    if (a <= b && a <= c) cout << "Номер наименьшего числа: 1" << endl;
    else if (b <= a && b <= c) cout << "Номер наименьшего числа: 2" << endl;
    else cout << "Номер наименьшего числа: 3" << endl;

    return 0;
}

