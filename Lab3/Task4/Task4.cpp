#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //ввод данных
    double n;
    cout << "This program calculates the sum of even numbers in the range from 1 to n with and without using a loop.\n";
    cout << "Enter n: ";
    cin >> n;
    //проверка корректности ввода
    if(n <= 1 || ceil(n) != n){
        cout << "Incorrect input";
        return 0;
    }

    //решение с использованием цикла
    int sum1 = 0;
    for (int i = 2; i <= n; i += 2){
        sum1 += i;
    }

    //решение без использование цикла
    n = (n / 2) * 2;
    int sum2 = ((2 + n) / 2) * (n / 2);

    //вывод
    cout << "Sum of even numbers in the range from 1 to " << n << " with using loop equal " << sum1 << "\n";
    cout << "Sum of even numbers in the range from 1 to " << n << " without using loop equal " << sum2 << "\n";

    return 0;
}