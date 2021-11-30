#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double geo_prog1 = 1.0 / 2;
    double geo_prog2 = 1.0 / 3;
    double sum = 0;
    
    //вычисление суммы
    do{
        sum += geo_prog1 + geo_prog2;
        geo_prog1 /= 2;
        geo_prog2 /= 3;
    }while (geo_prog1 + geo_prog2 >= 0.001);
    
    //вывод
    cout << "The sum of a sequence with precison e = 10^-3, the common term of which common term 1/2^n + 1/3^n equal ";
    cout <<  sum;

    return 0;
}