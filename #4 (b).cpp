#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int dM, dW;
	cout << "Введите дату: ";
	
	cin >> dM;

	cout << "Номер дня в неделе: ";
	cin >> dW;

	if ((13 == dM) && (5 == dW || 2 == dW))
		cout << "Это будет неудачный день...";
	else if ((17 == dM) && (5 == dW))
		cout << "Это тоже будет неудачный день...";
	else
		cout << "Обычный день";

	return 0;

}