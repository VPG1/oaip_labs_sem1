#include <iostream>
#include <cmath>
using namespace std;

int main(){
    for(int i = 10; i < 100; i++){
        if(pow(i / 10 + i % 10, 3) == pow(i, 2)){
            cout << "A two-digit number such that the cube the sum of its digits is equal to the square of the number itself equal " <<  i;
            
            return 0;
        }
    }
}