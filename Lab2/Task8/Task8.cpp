//вариант 5
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "x = -z / 3, if z < -1\n";
	cout << "x = abs(z), if z >= -1\n";
	cout << "a*f(x) - ln(x + 2.5) + b*(exp(x) - exp(-x))\n\n";
	//ввод данных
	double a, b;
	cout << "Enter a and b: ";
	cin >> a >> b;
	double z;
	cout << "Enter z: ";
	cin >> z;
	
	//вычисление x
	double x;
	if (z < 1) {
		x = -z / 3;
	}
	else {
		x = fabs(z);
	}

	//выбор функции
	int N;
	cout << "f(x): 2x, x^3, x / 3\n";
	cout << "Select f(x) (enter f(x) number): ";
	cin >> N;
	double func_x;
	switch (N) {
	case 1:
		func_x = 2 * x;
		break;
	case 2:
		func_x = pow(x, 3);
		break;
	case 3:
		func_x = x / 3;
		break;
	default:
		cout << "\nError";
		return 0;
	}
	cout << "\n";

	//вычисление значения выражения
	double y = a * func_x - log(x + 2.5) + b * (exp(x) - exp(-x));

	//вывод
	if (N == 1) {
		cout << "Calculations were performed with f(x) = 2x\n";
	}
	else if (N == 2) {
		cout << "Calculations were performed with f(x) = x^3\n";
	}
	else {
		cout << "Calculations were performed with f(x) = x / 3\n";
	}
	cout << "a*f(x) - ln(x + 2.5) + b*(exp(x) - exp(-x)) = " << y;

	return 0;
}