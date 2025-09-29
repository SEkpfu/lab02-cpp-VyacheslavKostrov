#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a;
	cout << "Введите число: "; cin >> a;


	if (a == 0) {
		cout << "Число равно нулю";
	}

	else if (a > 0) {
		cout << "Число положительное";
	}

	else if (a < 0) {
		cout << "Число отрицательное";
	}

	return 0;
}
