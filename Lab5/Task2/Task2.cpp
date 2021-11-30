#include <iostream>
#include <cmath>
using namespace std;

void input(double&); // функция ввода
void input(int&); // перегрузка функции ввода
void input_array(double*&, const int&); // функция ввода массива
double sum(const int&, const int&, double*&); // функция нахождения суммы


int main() {
    // ввод N
    int N;
    cout << "Enter N(size of array): ";
    input(N);

    // ввод масcива B    
    double* B = new double[N];
    cout << "Enter array B:\n";
    input_array(B, N);

    // вывод 
    cout << "sum = "<<sum(0, N - 1, B);

    delete[] B;

    return 0;
}


void input(double& number){
    while(!(cin >> number)){
        cout << "Incorrect input. Try again." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}
void input(int& number){
    while(!(cin >> number)){
        cout << "Incorrect input. Try again." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}


void input_array(double*& array, const int& size){
    for(int i = 0; i < size; ++i){
        cin >> array[i];
    }
}


double sum(const int& start, const int& end, double*& array) {
    if (!(end - start)) {
        return sin(2 * array[start]) / 2;
    }

    return sum(start, (end + start) / 2, array) + sum((end + start) / 2 + 1, end, array);
}
