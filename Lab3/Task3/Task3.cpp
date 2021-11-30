#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    //число пи
    double pi = 3.141592;
    double A = 0;
    double B = pi / 2;
    double M = 20;
    double H = (B - A) / M;

    //вычисление значения функции и вывод
    cout << "Value expression sin (x) - cos (x) on the interval [A, B] at points of the form xi = A + i * H, where M = 20 and H = (B - A) / M equal:\n";
    for(int i = 0; A + i * H <= B; i++){
        cout << fixed << sin(A + i * H) - cos(A + i * H) << endl;
    }
    
    return 0;
}