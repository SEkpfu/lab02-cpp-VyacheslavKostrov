#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите значение x: "; cin >> x;
	cout << "Введите значение y: "; cin >> y;

	if ((x >= -2) && (y <= 1))
		cout << "Данная точка принадлежит этой плоскости!";
	else
		cout << "Данная точка не принадлежит этой плоскости!";


	return 0;

}