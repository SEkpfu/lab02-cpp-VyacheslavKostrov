#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите количество кактусов: "; cin >> a;


	int last = a % 10;
		
	 if (a % 100 >= 11 && a % 100 <= 20)
		cout << "Мыши изгрызли " << a << " кактусов" << endl;
	 else if (last == 1)
		 cout << "Мыши изгрызли " << a << " кактус" << endl;
	else if (last == 2 || last == 3 || last == 4)
		cout << "Мыши изгрызли " << a << " кактуса" << endl;
	else
		cout << "Мыши изгрызли " << a << " кактусов" << endl;


	return 0;



}