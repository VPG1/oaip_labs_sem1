#include <iostream>
using namespace std;

int main() {
    //ввод первого члена бесконечно убывающей геометрической прогрессии
    double b1;
    cout << "Enter the first term of an infinitely decreasing geometric progression: ";
    cin >> b1;

    //мой номер в журнале
    double n = 21;

    //вычисление знаменателя геометрической прогрессии
    double q = 1 / (n + 1);

    //вычисление суммы всех членов бесконечно убывающей геометрической прогрессии
    double sum = b1 / (1 - q);

    //вывод
    cout << "The sum of all terms of an infinitely decreasing geometric progression is equal " << sum;

    return 0;
}