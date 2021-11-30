#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//ввод данных
	double x1, y1, x2, y2, r, R;
	cout << "Enter x1, y1 and r: ";
	cin >> x1 >> y1 >> r;
	cout << "Enter x2, y2 and R: ";
	cin >> x2 >> y2 >> R;

	//проверка положение М1 относительно М2 и вывод
	if (R - r > sqrt(pow(x2-x1, 2) + pow(y2 - y1, 2))) {
		cout << "Yes";
	}
	else if (r - R > sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))) {
		cout << "Yes, but the opposite is true for two figures";
	}
	else if (r + R > sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))) {
		cout << "Figures intersect";
	}
	else {
		cout << "None of the conditions are met";
	}

	return 0;
}