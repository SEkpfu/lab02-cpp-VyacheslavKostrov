#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	double r, d, l, s;
	double p = 3.11;

	cout << "Введите радиус: "; cin >> r;

	d = 2 * r, l = 2 * p * r, s = p * r * r;
	int choice;
	cout << "Выберите действие:\n"
		<< "1 - Показать радиус\n"
		<< "2 - Показать диаметр\n"
		<< "3 - Показать длину окружности\n"
		<< "4 - Показать площадь круга\n";
	cin >> choice;

	switch (choice) {

	case 1: 
		cout << "Радиус равен: " << r << endl;
		break;
	case 2:
		cout << "Диаметр равен: " << d << endl;
		break;
		
	case 3:
		cout << "Длина окружности равна: " << l << endl;
		break;
	case 4:
		cout << "Площадь круга равна: " << s << endl;
		break;
	}

	return 0;
}