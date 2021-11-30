#include <iostream>
using namespace std;

int main(){
    //ввод данных
    double x;
    cout << "Enter x: ";
    cin >> x;

    //вычисление квадрата x
    double x_sqr = x * x;

    //вычисление выржений
    double exp1 = 69 * x_sqr + 8;
    double exp2 = x * (23 * x_sqr + 32);

    //вычисление ответа
    double answer1 = exp1 + exp2;
    double answer2 = exp1 - exp2;

    //вывод данных
    cout << "If x = " << x << ":" << endl;
    cout << "23x^3 + 69x^2 + 32x + 8 = " << answer1 << endl;
    cout << "-23x^3 + 69x^2 - 32x + 8 = " << answer2 << endl;

    return 0;
}
