#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //создание переменной для хранения значения ускорения свободного падения
    double g = 9.81;

    //ввод значения высоты
    double h;
    cout << "Enter height: ";
    cin >> h;

    //нахождения времени свободного падения
    double t = sqrt(2 * h / g);

    //вывод
    cout << "Fall time is equal " << t;
    
    return 0;
}