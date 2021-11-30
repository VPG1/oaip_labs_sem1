#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russion");
    //ввод данных
    double k;
    cout << "Введите кол-во найдиенных грибов: ";
    cin >> k;
    
    //согласование сущиствительного и вывод
    bool number_is_integer = ceil(k) == k;
    int last_digit_of_number =  int(k) % 10; 
    cout << "Мы нашли ";
    if(last_digit_of_number == 1 && k != 11 && number_is_integer){
        cout << k << " гриб";
    }
    else if((last_digit_of_number == 0 || (k >= 5 && k <= 20) || last_digit_of_number >= 5) && number_is_integer){
        cout << k << " грибов";
    }
    else{
        cout << k << " гриба";
    }

    return 0;
}