#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Armsrong numbers - these are numbers equal to the sum of their digits raised to a power equal to the number of digits.\n";
    cout << "Armstrong numbers less than 1 million:\n";
    for(int i = 1; i < 1e6; i++){
        int copy_of_num = i;
        int number_of_digits = 0;
        do{
            copy_of_num /= 10;
            number_of_digits++;
        }while (copy_of_num != 0);
        
        int sum_of_powers_of_digits = 0;
        for(int j = 0; j < number_of_digits; j++){
            sum_of_powers_of_digits += pow((i / int(pow(10, j))) % 10, number_of_digits);
        }

        if(i == sum_of_powers_of_digits){
            cout << i << endl;
        }
    }
    
    return 0;
}