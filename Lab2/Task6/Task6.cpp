#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//ввод данных
	double a, b, c;
	int N;
	cout << "Enter a, b, c and N: ";
	cin >> a >> b >> c >> N;

	//вычисление значение функции
	double Y;
	switch (N) {
	case 2:
		Y = b * c - pow(a, 2);
		break;

	case 56:
		Y = b * c;
		break;
	case 7:
		Y = pow(a, 2) + c;
		break;
	case 3:
		Y = a - b * c;
		break;
	default:
		Y = pow(a + b, 3);
	}

	//вывод
	cout << Y;

	return 0;
}