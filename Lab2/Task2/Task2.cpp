#include <iostream>
using namespace std;

int main() {
    //часть 1
	//ввод данных
	int x, y;
	cout << "Enter two integers: ";
	cin >> x >> y;

	//присваивание наименьшей переменной значение ноль 
	if (x > y) {
		y = 0;
	}
	else if (x < y) {
		x = 0;
	}
	else {
		x = 0;
		y = 0;
	}

	//вывод
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";



    //часть 2
	//ввод данных
	double A, B, C, K;
	cout << "Enter three real numbers: ";
	cin >> A >> B >> C;
	cout << "Enter K: ";
	cin >> K;

	//поиск максимального значения
	double max = A;
	if (max < B) {
		max = B;
	}
	if (max < C) {
		max = C;
	}

	//уменьшение максимального значения на K
	if (max == A) {
		A /= K;
	}
	else if (max == B) {
		B /= K;
	}
	else if (max == C) {
		C /= K;
	}
	
	//вывод
	cout << "A = " << A << "\nB = " << B << "\nC = " << C;

	return 0;
}