#include <iostream>
#include <cmath> // isnan, isinf
using namespace std;

int main() {
    double x, f;
    cin >> x;

    if (x <= -2)
        f = 0;
    else if (x <= 0)
        f = x * x + 4 * x + 5;
    else
        f = 1.0 / (x * x + 4 * x - 5);

    if (isnan(f) || isinf(f))
        cout << "Ошибка: результат не является числом!" << endl;
    else
        cout << "f(x) = " << f << endl;

    return 0;
}
