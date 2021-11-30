#include <iostream>
using namespace std;

int main() {
	//ввод данных
	double x, y, z;
	cout << "Enter x, y and z: ";
	cin >> x >> y >> z;

	//проверка существования треугольника со сторонами x, y и z
	bool triangle_exist = x + y > z && x + z > y && y + z > x;
	if (triangle_exist) {
		cout << "triangle with such sides can exist";
	}
	else {
		cout << "triangle with such sides cannot exist";
	}

	return 0;
}