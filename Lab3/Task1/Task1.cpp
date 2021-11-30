#include <iostream>
using namespace std;

int main(){
    //вычисление суммы
    int sum = 0;
    for(int i = 1; i <= 30; i++){
        if(i % 2 == 1){
            sum += (i - i * i) * (i - i * i);
        }
        else{
            sum += (i / 2 - i * i * i) * (i / 2 - i * i * i);
        }
    }

    //вывод
    cout << "sum((ai - bi)^2), where i ranges from 1 to 30  " << sum << "\n";
    cout << "Where ai = i and bi = i^2, if i is odd or ai = i / 2 and bi = i^3, if i is even.";
    
    return 0;
}