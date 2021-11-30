#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//ввод данных
	double x, y, k;
	cout << "Enter k: ";
	cin >> k;
	cout << "Enter the coordinates of the point: ";
	cin >> x >> y;

	//расчёт растояние от точки до продолжений всех сторон квадрата
	double distance1_x = fabs(x - k);
	double distance2_x = fabs(x);
	double distance1_y = fabs(y - k);
	double distance2_y = fabs(y);

	//выбор наименьшего растояния до продолжения стороны квадрата 
	double min_x, min_y, min;
	distance1_x > distance2_x ? min_x = distance2_x : min_x = distance1_x;
	distance1_y > distance2_y ? min_y = distance2_y : min_y = distance1_y;
	min_x > min_y ? min = min_y : min = min_x;

	//вычисление наименьшего растояния до стороны квадрата
	double min_distance_to_side;
	bool condition1 = distance1_x > k || distance2_x > k;
	bool condition2 = distance1_y > k || distance2_y > k;
	if (condition1 != condition2){
		if (condition1) {
			min_distance_to_side = min_x;
		}
		else {
			min_distance_to_side = min_y;
		}
	}
	else if (condition1 || condition2) {
		min_distance_to_side = sqrt(pow(min_x, 2) + pow(min_y, 2));
	}
	else {
		min_distance_to_side = min;
	}

	//вывод
	if (condition1 || condition2) {
		cout << "the point doesn't lie inside the square\n";
	}
	else{
		cout << "the point lies inside the square\n";
	}
	cout << "minimum distance to the side of the square is equal " << min_distance_to_side;

	return 0;
}