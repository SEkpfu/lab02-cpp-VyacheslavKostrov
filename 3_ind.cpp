#include <iostream>
using namespace std;
int main() {

	setlocale(0, "");
	
	int x, y;
	cout << "Введите x: "; cin >> x;
	cout << "Введите y: "; cin >> y;

	if (x >= 0 && y >= 0 && x * x + y * y <= 64) {
		cout << "Точка попала в заштрихованную область";
	}

	else if (x <= 0 && y >= 4 && y <= 8) {
		cout << "Точка попала в заштрихованную область";
	}

	else if (y <= 0 && y >= -4 && x >= -8 && x <= 8 &&
		y >= -0.5 * x - 4 && y >= 0.5 * x - 4) {
		cout << "Точка попала в заштрихованную область";
	}
	
	else
		cout << "Точка не попала в заштрихованную область";

	return 0;
}
