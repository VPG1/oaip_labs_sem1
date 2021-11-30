#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//ввод данных
	double a, b, c, p, q;
	cout << "1.ax^4 + bx^2 + c = 0\n";
	cout << "2.ax^4 + bx^3 + cx^2 + bx + a = 0\n";
	cout << "3.x^3 + px^3 + q = 0\n\n";
	cout << "Enter a, b, c, p and q: ";
	cin >> a >> b >> c >> p >> q;
	cout << "\n";



	//решение уравнения 1

	/*
	ax^4 + bx^2 + c = 0
	t = x^2
	at^2 + bt + c = 0
	*/

	//корни уравнения
	double x1_of_eq1, x2_of_eq1, x3_of_eq1, x4_of_eq1;

	//корни уравнения с заменной
	double t1_of_eq1, t2_of_eq1;

	//дискриминант уравнения с заменой
	double D_of_eq1_with_t = pow(b, 2) - 4 * a * c;

	//переменные для проверки существования корней
	bool eq1_x1_exist = false;
	bool eq1_x2_exist = false;
	bool eq1_x3_exist = false;
	bool eq1_x4_exist = false;

	//вычисление корней первого уравнения
	if (D_of_eq1_with_t > 0) {
		t1_of_eq1 = (-b + sqrt(D_of_eq1_with_t)) / (2 * a);
		t2_of_eq1 = (-b - sqrt(D_of_eq1_with_t)) / (2 * a);

		if (t1_of_eq1 > 0) {
			x1_of_eq1 = sqrt(t1_of_eq1);
			x2_of_eq1 = -sqrt(t1_of_eq1);

			eq1_x1_exist = true;
			eq1_x2_exist = true;
		}
		else if(!t1_of_eq1){
			x1_of_eq1 = 0;

			eq1_x1_exist = true;
		}

		if (t2_of_eq1 > 0) {
			x3_of_eq1 = sqrt(t2_of_eq1);
			x4_of_eq1 = -sqrt(t2_of_eq1);

			eq1_x3_exist = true;
			eq1_x4_exist = true;
		}
		else if(!t2_of_eq1){
			x3_of_eq1 = 0;
			
			eq1_x3_exist = true;
		}
	}
	else if (!D_of_eq1_with_t) {
		t1_of_eq1 = -b / (2 * a);
		
		if (t1_of_eq1 > 0) {
			x1_of_eq1 = sqrt(t1_of_eq1);
			x2_of_eq1 = -sqrt(t1_of_eq1);

			eq1_x1_exist = true;
			eq1_x2_exist = true;
		}
		else if(!t1_of_eq1){
			x1_of_eq1 = 0;
			
			eq1_x1_exist = true;
		}
	}

	//вывод корней первого уравнения
	if(eq1_x1_exist || eq1_x2_exist || eq1_x3_exist || eq1_x4_exist){
		cout << "The roots of the equation number 1 are";
		if(eq1_x1_exist){
			cout << " x = " << x1_of_eq1;
		}
		if(eq1_x2_exist){
			cout << " x = " << x2_of_eq1;
		}
		if(eq1_x3_exist){
			cout << " x = " << x3_of_eq1;
		}
		if(eq1_x4_exist){
			cout << " x = " << x4_of_eq1;
		}
	}
	else{
		cout << "The equation number 1 has no roots";
	}
	cout << "\n";



	//решение уравнения 2

	/*
	ax^4 + bx^3 + cx^2 + bx + a = 0 делим уравнение на x^2
	a(x^2 + 1 / x^2) + b(x + 1 / x) + c = 0
	t = x + 1 / x
	t^2  = x^2 + 1 / x^2 + 2 = 0
	at^2 + bt + c - 2a = 0
	x^2 - tx + 1 = 0
	*/

	//корни уравнения
	double x1_of_eq2, x2_of_eq2, x3_of_eq2, x4_of_eq2;

	//корни уравнения с заменной
	double t1_of_eq2, t2_of_eq2;

	//дискриминант уравнения с заменой
	double D_of_eq2_with_t = pow(b, 2) - 4 * a * (c - 2 * a);

	//переменные для проверки существования корней
	bool eq2_x1_exist = false;
	bool eq2_x2_exist = false;
	bool eq2_x3_exist = false;
	bool eq2_x4_exist = false;

	//вычисление корней уравнения
	if (D_of_eq2_with_t > 0) {
		t1_of_eq2 = (-b + sqrt(D_of_eq2_with_t)) / (2 * a);
		t2_of_eq2 = (-b - sqrt(D_of_eq2_with_t)) / (2 * a);
		

		//решение уравнения x^2 - t1x + 1 = 0

		//дискриминант x^2 - t1x + 1 = 0
		double D_t1 = pow(t1_of_eq2, 2) - 4;

		if (D_t1 > 0) {
			x1_of_eq2 = (t1_of_eq2 + sqrt(D_t1)) / 2;
			x2_of_eq2 = (t1_of_eq2 - sqrt(D_t1)) / 2;

			eq2_x1_exist = true;
			eq2_x2_exist = true;
		}
		else if (!D_t1) {
			x1_of_eq1 = t1_of_eq2 / 2;
			eq2_x1_exist = true;
		}


		//решение уравнения x^2 - t2x + 1 = 0
	
		//дискриминант x^2 - t2x + 1 = 0
		double D_t2 = pow(t2_of_eq2, 2) - 4;
		
		if (D_t2 > 0) {
			x3_of_eq2 = (t2_of_eq2 + sqrt(D_t2)) / 2;
			x4_of_eq2 = (t2_of_eq2 - sqrt(D_t2)) / 2;

			eq2_x3_exist = true;
			eq2_x4_exist = true;
		}
		else if (!D_t1) {
			x3_of_eq1 = t2_of_eq2 / 2;

			eq2_x3_exist = true;
		}

	}

	else if (!D_of_eq2_with_t) {
		t1_of_eq2 = -b / (2 * a);


		//решение уравнения x^2 - t1x + 1 = 0

		//дискриминант x^2 - t1x + 1 = 0
		double D_t1 = pow(t1_of_eq2, 2) - 4;

		if (D_t1 > 0) {
			x1_of_eq2 = (t1_of_eq2 + sqrt(D_t1)) / 2;
			x2_of_eq2 = (t1_of_eq2 - sqrt(D_t1)) / 2;

			eq2_x1_exist = true;
			eq2_x2_exist = true;
		}
		else if (!D_t1) {
			x1_of_eq1 = t1_of_eq2 / 2;

			eq2_x1_exist = true;
		}

	}

	//вывод корней второго уравнения
	if (eq2_x1_exist || eq2_x2_exist || eq2_x3_exist || eq2_x4_exist) {
		cout << "The roots of the equation number 2 are";

		if (eq2_x1_exist) {
			cout << " x = " << x1_of_eq2;
		}
		if (eq2_x2_exist) {
			cout << " x = " << x2_of_eq2;
		}
		if (eq2_x3_exist) {
			cout << " x = " << x3_of_eq2;
		}
		if (eq2_x4_exist) {
			cout << " x = " << x4_of_eq2;
		}
	}
	else {
		cout << "The equation number 2 has no roots";
	}
	cout << "\n";



	//решение уравнения 3

	/*
	x^3 + px + q = 0
	решаем по формуле Кардано
	*/

	//корень уравнения
	double x1_of_eq3;

	//переменная для проверки существования корня
	bool eq3_x1_exist = false;
	
	//нахождение подкоренного выражения в формуле
	double exp_under_sqrt = pow(q, 2) / 4 + pow(p, 3) / 27;

	//нахождение корней
	if(exp_under_sqrt >= 0){
		double exp_under_cbrt = -q / 2 + sqrt(exp_under_sqrt);
		if(exp_under_cbrt > 0){
			x1_of_eq3 = pow(exp_under_cbrt, 1.0 / 3) - p / (3 * pow(exp_under_cbrt, 1.0 / 3));
			eq3_x1_exist = true;
		}
		if(exp_under_cbrt < 0){
			x1_of_eq3 = -pow(-exp_under_cbrt, 1.0 / 3) + p / (3 * pow(-exp_under_cbrt, 1.0 / 3));
			eq3_x1_exist = true;
		}
	}

	//вывод корней уравнения 3
	if(eq3_x1_exist){
		cout << "The root of the equation number 3 are";
		cout << " x = " << x1_of_eq3;
	}
	else{
		cout << "The equation number 3 has no roots";
	}
	
	return 0;
}