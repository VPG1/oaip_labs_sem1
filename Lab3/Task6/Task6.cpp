#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //ввод данных
    cout << "This program calculates the root of the equation using the algorithm:\n";
    cout << "Iterate over the values from the beginning to the end of the interval with some step\nand look for function value, modulo minimum.\n";
    double n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    //защита от некорректного ввода
    if(n < 1 || ceil(n) != n){
        cout << "Incorrect input.";
        return 0;
    }

    //концы отрезка
    double a = 1.0, b = 3.0;

    //длина шага
    double step = (b - a) / n;

    //вычисление корня
    double root = a;
    double value_min = fabs(acos(exp(-a)) - 2.0 * sin(a));
    for(double i = a + step; i <= b; i += step){
        double value = fabs(acos(exp(-i)) - 2.0 * sin(i)); 
        if(value_min > value){
            value_min = value;
            root = i;
        }
    }

    //вывод
    cout << "The root of the equation equal " << root;

    return 0;
}