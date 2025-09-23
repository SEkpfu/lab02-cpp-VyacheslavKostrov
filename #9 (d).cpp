#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, y2;

	cout << "Введите х: "; cin >> x;
		cout << "Введите у: "; cin >> y;

	y2 = -2*x + 2;

	if ((x >= 0) && (x <= 1) && (y >= 0) && (y <= y2))
		cout << "Точка входит в данную фигуру";
	else
		cout << "Точка не входит в данную фигуру";

	return 0;

}