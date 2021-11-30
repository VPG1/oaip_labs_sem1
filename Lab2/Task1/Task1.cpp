#include <iostream>
using namespace std;

int main() {
	//ввод данных
	int x, y;
	cout << "Enter two integers: ";
	cin >> x >> y;

	//проверка условия и вывод
	if (x % y == 0) {
		cout << x << " is divisible by " << y << " without remainder";
	}
	else if (y % x == 0) {
		cout << y << " is divisible by " << x << " without remainder";
	}
	else {
		cout << x << " and " << y << " are not divisible by each other";
	}

	return 0;
}