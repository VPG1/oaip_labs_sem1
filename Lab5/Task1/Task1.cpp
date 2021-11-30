#include <iostream>
#include <cmath>
#include "ForVector.h"
#include "Input.h"
using namespace std;

inline void starline(){
    for(int i = 0; i < 50; ++i){
        cout << "*";
    }
    cout << endl;
}
bool condition(const int& number){ // функция для дополнительного условия
    return number >= 0;
}



int main(){
    starline();
    // ввод размера массива
    int size;
    cout << "Enter size of vectors X and Y: ";
    input(size, condition);

    starline();
    //ввод вектора X
    double* X = new double[size];
    cout << "Enter vector X" << endl;
    for(int i = 0; i < size; ++i){
        input(X[i]);
    }


    // заполнения вектора Y
    double* Y = new double[size];
    fill_vector(Y, size);

    starline();
    //вывод
    cout << "Vector Y:" << endl;
    for(int i = 0; i < size; ++i){
        cout << Y[i] << endl;
    }

    starline();
    cout << "Product of vectors X and Y equal " << product_of_vector(X, Y, size) << endl;
    starline();

    delete[] X;
    delete[] Y;

    return 0;
}



