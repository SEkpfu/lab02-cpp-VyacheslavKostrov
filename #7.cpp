#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b;
	char op;

	cout << "Введите первое число: "; cin >> a;
	cout << "Введите второе число: "; cin >> b;

	

	cout << "Введите операцию (+, -, *): ";
	cin >> op;

	switch (op) {
	case  '+':
		cout << "Сложение: " << a + b; break;
	case '-':
		cout << "Вычитание: " << a - b; break;
	case '*':
		cout << "Умножение: " << a * b; break;
	default:
		cout << "Неизвестная операция";
	}

	return 0;
}