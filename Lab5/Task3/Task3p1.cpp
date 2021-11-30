#include <iostream>
using namespace std;

void input(int& number, const char* str = "Incorrect input. Try again."); // функция ввода c проверкой корректности ввода 
void creation_array(int**& matrix, int*& array, int& size); // функция создания нового массива
int product_elements_of_array(int*& array, const int& size); // функция произведения элементов массива


int main(){
    // ввод размера матрицы A
    int n, k;
    cout << "Enter N(number of rows): ";
    input(n);
    cout << "Enter K(number of columns): ";
    input(k);

    // ввод элементов матрицы A
    int** A = new int*[n];
    cout << "Enter matrix:\n";
    for(int i = 0; i < n; ++i){
        A[i] = new int[k];
        for(int j = 0; j < k; ++j){
            input(A[i][j], "Incorrect input of the last row. Try again.");
        }
    }

    // переменная для хранения длинны нового массива
    int size_of_array = n; 

    // coздание массива для хранеиния четных элементов диагонали
    int* array = new int[n];
    creation_array(A, array, size_of_array);

    // вывод
    cout << "Array of even elements of the diagonal of the matrix:\n";
    for(int i = 0; i < size_of_array; ++i){
        cout << array[i] << " ";
    }
    cout << "\nThe product of the elements of this array equal " << product_elements_of_array(array, size_of_array);

    // очистка памяти
    for(int i = 0; i < n; ++i){
        delete[] A[i];
    }
    delete[] A;
    delete[] array;
    
    return 0;
    
}

void input(int& number, const char* str){
    while(!(cin >> number)){
        cout << str << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}

void creation_array(int**& matrix, int*& array, int& size){
    int size_of_new_array = 0;
    for(int i = 0; i < size; ++i){
        if(matrix[i][i] % 2 == 0){
            array[size_of_new_array] = matrix[i][i];
            ++size_of_new_array;
        }
    }

    int* new_array = new int[size_of_new_array]; 
    for(int i = 0; i < size_of_new_array; ++i){
        new_array[i] = array[i];
    }
    delete[] array;
    
    array = new_array;
    size = size_of_new_array;
}


int product_elements_of_array(int*& array, const int& size){
    int result = 1;
    for(int i = 0; i < size; ++i){
        result *= array[i];
    }

    return result;
}
