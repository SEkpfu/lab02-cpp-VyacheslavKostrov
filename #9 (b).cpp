#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите значение x: "; cin >> x;
	cout << "Введите значение y: "; cin >> y;

	double r = 5;

	if ((x * x + y * y <= r * r) && (y >= 0))
		cout << "Точка входит в полукруг!";
	else
		cout << "Точка не входит в полукруг!";

	return 0;


}