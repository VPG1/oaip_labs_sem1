#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //ввод значения ускорения, времени и начальной скорости
    double a, t, v0;
    cout << "Enter acceleration, time and starting speed: ";
    cin >> a >> t >> v0;

    //нахождения пройденого растояния
    double s = v0 * t + a * pow(t, 2) / 2; 

    //вывод
    cout << "The distance traveled by body is equal " << s;

    return 0;
}