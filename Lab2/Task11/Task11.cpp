#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//ввод данных
	double a, r;
	cout << "Enter side of the square: ";
	cin >> a;
	cout << "Enter radius of the circle: ";
	cin >> r;
	
	//число пи
	double pi = 3.1415;

	//вычисление площади круга и квадрата
	double Area_of_the_circle = pi * pow(r, 2);
	double Area_of_the_square = pow(a, 2);

	//вывод
	if(Area_of_the_circle > Area_of_the_square){
		cout << "The area of the circle is larger than the area of the square";
	}
	else if(Area_of_the_circle == Area_of_the_square){
		cout << "The area of the circle is equal to the area of the square";
	}
	else{
		cout << "The area of the square is larger than the area of the circle";
	}

	return 0;
}