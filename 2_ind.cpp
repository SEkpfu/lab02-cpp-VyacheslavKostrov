#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	double y, x;
	cout << "Введите y: "; cin >> y;
	


	if (y <= -1) {
		x = sin(M_PI * y);
	}
	
	else if (y > 0) {
		x = sqrt(fabs(y * y - 5));
	}

	else {
		x = pow(y * y - 1, 2);
	}

	cout << "x = " << x << endl;

	return 0;

}
