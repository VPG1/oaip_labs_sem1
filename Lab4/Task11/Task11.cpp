#include <iostream>
using namespace std;

int main(){
    cout << "This program searches for the diagonal of the array with the greatest sum of elements\n";
    //ввод размера трехмерного массива
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    //выделение памяти
    int*** array = new int**[n];
    for(int i = 0; i < n; ++i){
        array[i] = new int*[n];
        for(int j = 0; j < n; ++j){
            array[i][j] = new int[n];
        }
    }

    // ввод трехмерного массива
    cout << "Enter three-dimensional array:\n";
    for(int k = 0; k < n; ++k){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin >> array[i][j][k];
            }
        }
    }

    //вычисление сумм диагоналей
    int sum1 = 0;
    for(int i = 0; i < n; ++i){
        sum1 += array[i][i][i];
    }

    int sum2 = 0;
    for(int i = 0; i < n; ++i){
        sum2 += array[i][i][n - i - 1];
    }
    
    int sum3 = 0;
    for(int i = 0; i < n; ++i){
        sum3 += array[n - 1 - i][i][i];
    }

    int sum4 = 0;
    for(int i = 0; i < n; ++i){
        sum4 += array[i][n - 1 - i][i];
    }

    // нахождение диагонали с максимальной суммой элементов
    int max_sum = sum1;
    int number_of_diagonal = 1;
    if(sum2 > max_sum){
        max_sum = sum2;
        number_of_diagonal = 2;
    }
    if(sum3 > max_sum){
        max_sum = sum3;
        number_of_diagonal = 3;
    }
    if(sum4 > max_sum){
        max_sum = sum4;
        number_of_diagonal = 4;
    }

    // вывод
    cout << "The diagonal with the greatest sum of elements has number " << number_of_diagonal;

    //очистка памяти
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            delete[] array[i][j];
        }
        delete[] array[i];
    }
    delete[] array;

    return 0;
}