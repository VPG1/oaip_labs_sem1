#include <iostream>
using namespace std;

int main(){
    //ввод данных
    double a, b, c, x, y;
    cout << "Enter brick edges: ";
    cin >> a >> b >> c;
    cout << "Enter sides of a rectangular hole: ";
    cin >> x >> y;

    //нахождение грани кирпича с наименьшей длинной сторон
    double min = a;
    double pre_min;
    b > c ? pre_min = b : pre_min = c;
    
    if(min > b){
        pre_min = min;
        min = b;
    }
    if(min > c){
        pre_min = min;
        min = c;
    }

    //проверка условия и вывод
    if((min <= x && pre_min <= y) || (min <= y && pre_min <= x)){
        cout << "The brick will be able to pass through a rectangular hole: ";
    }
    else{
        cout << "The brick will not be able to pass through a rectangular hole: ";
    }
    
    return 0;
}