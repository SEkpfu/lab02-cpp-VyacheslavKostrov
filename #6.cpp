#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите оценку: "; cin >> a;

	switch (a) {
	case 5: cout << "Отлично"; break;
	case 4: cout << "Хорошо"; break;
	case 3: cout << "Удовлетворительно"; break;
	case 2:
	case 1: cout << "Плохо"; break;
	default: cout << "Неверные данные"; break;
	}

	return 0;

}

//Если удалить функцию break в строке с оценкой 4, то выведется ХорошоУдовлетворительно
//Функция как бы ищет первый попавшийся break, чтобы завершить. По пути "собирает" выражения из cout