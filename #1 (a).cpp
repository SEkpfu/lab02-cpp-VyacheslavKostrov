#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double a, b, c, d;

	cout << "Введите стороны первого прямоугольника:  \n";
	cout << "Длина первого: "; cin >> a;
	cout << "Ширина первого: "; cin >> b;

	cout << "Введите стороны второго прямоугольника: \n";
	cout << "Длина второго: "; cin >> c;
	cout << "Ширина второго: "; cin >> d;

	double s1, s2;

	s1 = a * b;
	s2 = c * d;

	if (s1 > s2) {
		cout << "Площадь первого прямоугольника больше";
	}

	else if (s1 < s2) {
		cout << "Площадь второго прямоугольника больше";
	}

	else {

		cout << "Площади равны";
	}

	return 0;
}