#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;

	cout << "Введите x: "; cin >> x;
	cout << "Введите у: "; cin >> y;

	double r2 = x * x + y * y;
	if (x >= 0 && r2 >= 9 && r2 <= 36)
		cout << "Точка входит в фигуру";
	else
		cout << "Точка не входит в фигуру";


	return 0;
	
}