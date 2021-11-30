#include <iostream>
#include <cmath>
using namespace std;

int sum(int x, int y){
    int a, b;
    do {
        a = x & y;
        b = x ^ y;
        x = a << 1;
        y = b;
    }while(a);
    return b;
}

int main(){
    cout << "This program calculates a0 - 2a1 + 4a2 - ... + (-1) ^ (n - 1) * a(n-1) without using real arithmetic.\n";
    double n;
    cout << "Enter n: ";
    cin >> n;
    if(n < 1  || n != ceil(n)){
        cout << "Incorrect input.";
        return 0;
    }

    int exp = 0;
    for(int i = 0; i < n; i++){
        int a;
        cout << "Enter a" << i <<": ";
        cin >> a;
        a = a << i;
        if(i % 2 == 1){
            a = sum(~a, 1);
        }
        exp = sum(exp, a);
    }

    cout << exp;

    return 0;
}