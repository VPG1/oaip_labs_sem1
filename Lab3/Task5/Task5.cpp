#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //ввод данных
    cout << "This program calculates the value of the function (exp(x) - exp(-x)) / 2 analitcaly and using a series approximating this function\n";

    int n;
    cout << "Enter the number of members of the series n: ";
    cin >> n;

    int k;
    cout << "Enter the amount of numbers from which you want to calulates the function: ";
    cin >> k;


    for(int i = 1; i <= k; i++){
        //ввод x
        double x;
        cout << "\nEnter x: ";
        cin >> x;

        //защита от некоретного ввода
        if(x < 0.1 || x > 1){
            i--;
            cout << "incorrect input";
            continue;
        }

        //вычисление значения функции при помощи ряда
        double answer1 = 0;
        double nominator = x;
        double denominator = 1;
        int factor = 1;
        for(int j = 0; j < n; j++){
            answer1 += (nominator / denominator);

            //вычисение числителя
            nominator *= x * x;

            //вычисление знаменателя
            denominator *= (factor + 2) * (factor + 1);
            factor += 2;
        }

        //аналитическое вычисление функции
        double answer2 = (exp(x) - exp(-x)) / 2;

        cout << "Function value calculate using the series equal " << answer1;
        cout << "\nFunction value calculated analytically equal " << answer2;
    }
    
    return 0;
}