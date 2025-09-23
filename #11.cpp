#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;

    cout << "Введите день рождения: "; cin >> birthDay;
    cout << "Введите месяц рождения: "; cin >> birthMonth;
    cout << "Введите год рождения: "; cin >> birthYear;

    cout << "Введите текущий день: "; cin >> currentDay;
    cout << "Введите текущий месяц: "; cin >> currentMonth;
    cout << "Введите текущий год: "; cin >> currentYear;

    int age = currentYear - birthYear;
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

    //Если число оканчивается на 1 (кроме 11), то будет писаться год
    //Если число оканчивается на 2, 3, 4 (кроме 12, 13, 14), то будет писаться года
    //В остальных случаях пишется лет
    string word;
    if (age % 10 == 1 && age % 100 != 11)
        word = "год";
    else if ((age % 10 >= 2 && age % 10 <= 4) && !(age % 100 >= 12 && age % 100 <= 14))
        word = "года";
    else
        word = "лет";

    cout << "Вам " << age << " " << word << endl;

    return 0;
}
