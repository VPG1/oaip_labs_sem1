#include <iostream>
using namespace std;

int main() {
	//ввод первого и сотого члена арифметической прогрессии
	double a1, a100;
	cout << "Enter the first term of the arithmetic sequence: ";
	cin >> a1;
	cout << "Enter the hundredth term of the arithmetic sequence: ";
	cin >> a100;

	//мой номер в списке
	double n = 21;

	//вычисление разности арифметической прогрессии	
	double d = (a100 - a1) / 99;

	//вычисление суммы n + 10 членов арифметической прогрессии
	double sum = (2 * a1 + d * (n + 9)) * (n + 10) / 2;

	//вывод
	cout << "1.Difference of arithmetic progression is equal " << d << endl;
	cout << "2.The sum of the first n + 10 members of the arithmetic progression is equal " << sum;

    return 0;
}