#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double x;

	cout << "Введите число: "; cin >> x;

	if (int(x) % 2 == 0) {
		cout << "Это чётное число";
	}

	else {
		cout << "Это нечётное число";
	}

	return 0;
}