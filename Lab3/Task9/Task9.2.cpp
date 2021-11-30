#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "This program calculates a0 - 2a1 + 4a2 - ... + (-1) ^ (n - 1) * a(n-1) without using real arithmetic.\n";
    double n;
    cout << "Enter n: ";
    cin >> n;

    if(n < 1 || ceil(n) != n){
        cout << "Incorrect input.";
        return 0;
    }

    double sum = 0;
    int factor = 1;
    for(int i = 0; i < n; i++){
        double a;
        cout << "Enter a" << i << ": ";
        cin >> a;
        sum += factor * a;
        factor *= -2;
    }
    cout << sum;

    return 0;
}