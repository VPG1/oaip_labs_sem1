#include <iostream>
using namespace std;

int main() {
	//ввод данных
	double x, y;
	cout << "Enter two real numbers:";
	cin >> x >> y;

	//создание переменной логического типа
	bool x_is_greater_y = x > y;

	//создание перменной для хранения максимального значения
	double max;

	//решение с переменной логического типа
	x_is_greater_y ? max = x : max = y;

	//решение без переменной логического типа
	x > y ? max = x : max = y;

	//вывод
	cout << max;

	return 0;
}