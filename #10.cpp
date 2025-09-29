#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, z;

    cout << "Введите x: "; cin >> x;
    cout << "Введите y: "; cin >> y;
    cout << "Введите z: "; cin >> z;

    if ((x + y > z) && (x + z > y) && (y + z > x))
    {
        cout << "Такой треугольник существует" << endl;

        if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
            cout << "Это прямоугольный треугольник" << endl;

        if (x == y && y == z)
            cout << "Это равносторонний треугольник" << endl;
        else if (x == y || x == z || y == z)
            cout << "Это равнобедренный треугольник" << endl;

       
        
    }
    else
        cout << "Такого треугольника не существует" << endl;

    return 0;
}
