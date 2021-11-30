#include <iostream>
using namespace std;

int main() {
	//ввод даных
	double a, b, c, d;
	cout << "Enter a, b, c and d: ";
	cin >> a >> b >> c >> d;

	//создание переменной для хранения значения функции
	double Z;

	//Вычисление значения функции
	if (c >= d && a < d) {
		Z = a + b / c;
	}
	else if (c < d && a >= d) {
		Z = a - b / c;
	}
	else {
		Z = 0;
	}

	//вывод
	cout << Z;

	return 0;
}