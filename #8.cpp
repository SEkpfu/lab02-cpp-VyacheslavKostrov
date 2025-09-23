#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите значение x: "; cin >> x;
	cout << "Введите значение y: "; cin >> y;

	if ((x >= -2 && x <= 2) && (y >= -2 && y <= 2))
		cout << "Вы выбили 10 очков!";
	else if ((x >= -4 && x <= 4) && (y >= -4 && y <= 4))
		cout << "Вы выбили 5 очков!";
	else
		cout << "Вы выбили 0 очков!";

	return 0;

}