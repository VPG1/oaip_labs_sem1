#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //ввод данных
    double R, P, Q;
    cout << "Enter radius of the ball: ";
    cin >> R;
    cout << "Enter the side and aqute angle(in degrees) of the diamond: ";
    cin >> P >> Q;

    //число Пи
    double pi = 2 * asin(1);

    //проверка условия и вывод
    cout << "\n";
    if(R <= (P * sin(Q * pi / 180) / 2)){
        cout << "The ball will be able to pass through a diamond-shaped hole";
    }
    else{
        cout << "The ball will not be able to pass through the diamond-shaped hole";
    }

    return 0;
}