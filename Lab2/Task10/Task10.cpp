#include <iostream>
using namespace std;

int main() {
	//ввод данных
	double x;
	cout << "Enter x: ";
	cin >> x;

	//число пи
	double pi = 3.1415;

	//поиск наименьшей фунции
	if(x > -0.579 && x < 1.303){
		cout << "ln(abs(x)) = min";
		return 0;
	}
	if(x == -0.579){
		cout << "ln(abs(x)) = sin(x) = min";
		return 0;
	}
	if(x == 1.303){
		cout << "ln(abs(x) = cos(x) = min";
		return 0;
	}

	while(x < 0){
		x = x + 2 * pi;
	}
	while(x > 2 * pi){
		x = x - 2 * pi;
	}
	
	if(x == pi / 4 || x == 5 * pi / 4){
		cout << "sin(x) = cos(x) = min";
	}
	else if(x > pi / 4 && x < 5 * pi / 4){
		cout << "cos(x) = min";
	}
	else {
		cout << "sin(x) = min";
	}
	return 0;
}