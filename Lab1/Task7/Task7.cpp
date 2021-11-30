#include <iostream>

using namespace std;

int main() {
    //ввод двух целых чисел
    int a, b;
    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    //вывод a и b до начала алгоритма
    cout << "before the start of the algorithm:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    //1 шаг
    a = a ^ b;
    //вывод после 1 шага алгоримтма
    cout << "1 step:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    //2 шаг
    b = a ^ b;
    //вывод после 2 шага алгоритма
    cout << "2 step:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    //3 шаг
    a = a ^ b;
    //вывод после 3 шага алгоримта
    cout << "3 step:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}