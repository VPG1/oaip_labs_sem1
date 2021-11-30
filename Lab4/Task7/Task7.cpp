#include <iostream>
using namespace std;

int main(){
    cout << "This program counts the number of digits of the number n and determines the digit in the i-th place.\n";
    //ввод
    int n, i;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter the order of the digits: ";
    cin >> i;

    
    int digit;
    int number_of_digits = 0;
    while(n){
        if(number_of_digits == i){
            digit = n % 10;
        }
        n /= 10;
        number_of_digits++;    
    }

    //вывод
    cout << "/////////////////////////////////////\n";
    cout << "Number of digits equal " << number_of_digits << "\n";
    cout << "A digit of order " << i <<  " is " << digit;
}   