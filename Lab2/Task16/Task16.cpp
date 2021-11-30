#include <iostream>
using namespace std;

int main(){
    //ввод данных
    int a, b;
    cout << "Enter two integers number: ";
    cin >> a >> b;  

    //вычисление наибольшего общего делителя
    int copy_of_a = a;
    int copy_of_b = b;
    while(copy_of_b){
        int remainder = copy_of_a % copy_of_b;
        copy_of_a = copy_of_b;
        copy_of_b = remainder;
    }
    int gcd = copy_of_a;

    //вычисление наименьшего общего кратного
    int lcm = a * b / gcd;

    //вывод
    cout << "Greatest common divisor equal " << gcd << endl;
    cout << "Least common multiple equal " << lcm << endl;

    return 0;
}