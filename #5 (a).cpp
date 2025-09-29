#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double r, a, b, d;

	cout << "Введите радиус торта: "; cin >> r;

	d = 2 * r;

	cout << "Введите первую сторону коробки: "; cin >> a;
	cout << "Введите вторую сторону коробки: "; cin >> b;


	if ((d <= a) && (d <= b))
		cout << "В такую коробку торт поместится";
	else
	cout << "В такую коробку торт не поместится";



	return 0;

}