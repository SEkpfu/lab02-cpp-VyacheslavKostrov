#include <iostream>
#include <cmath>  // Добавь эту строку
using namespace std;

int main()
{
    setlocale(0, "");
    const double PI = 3.11;
    int choice;
    double value;

    cout << "Выберите элемент (1-R, 2-D, 3-L, 4-S): ";
    cin >> choice;
    cout << "Введите значение: ";
    cin >> value;

    double R, D, L, S;

    switch (choice) {
    case 1: // Радиус 
        R = value;
        D = 2 * R;
        L = 2 * PI * R;
        S = PI * R * R;
        break;

    case 2: // Диаметр 
        D = value;
        R = D / 2;
        L = 2 * PI * R;
        S = PI * R * R;
        break;

    case 3: // Длина окружности 
        L = value;
        R = L / (2 * PI);
        D = 2 * R;
        S = PI * R * R;
        break;

    case 4: // Площадь круга 
        S = value;
        R = sqrt(S / PI);
        D = 2 * R;
        L = 2 * PI * R;
        break;

    default:  // если пользователь введёт 5 или другие числа
        cout << "Ошибка: неверный выбор!" << endl;
        return 1;
    }

    cout << "Результаты:" << endl;
    cout << "1. Радиус R = " << R << endl;
    cout << "2. Диаметр D = " << D << endl;
    cout << "3. Длина окружности L = " << L << endl;
    cout << "4. Площадь круга S = " << S << endl;

    return 0;
}