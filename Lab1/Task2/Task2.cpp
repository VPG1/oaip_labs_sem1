//вариант 1
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //ввод данных
    double x, D;
    cout << "Enter x and D: ";
    cin >> x >> D;

    //вычисление значения b и A
    double b = x + D;
    double A = D * x / b;

    //вычилсение выражения
    double S = (pow(A, 2) + b * cos(x)) / (pow(D, 3) + (A + D - b));

    //вывод
    cout << "S = " << S;

    return 0;
}
