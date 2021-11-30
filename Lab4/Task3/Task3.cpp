#include <iostream>
using namespace std;

int main(){
    cout << "This program looks for saddle points in a matrix\n";
    //ввод размерности матрицы
    cout << "Enter the number of rows and columns: ";
    int n, m;
    cin >> n >> m;

    //создание матрицы и ввод её значений 
    cout << "Enter the matrix:\n";
    int** matrix = new int*[n];
    for(int i = 0; i < n; ++i){
        matrix[i] = new int[m];
        for(int j = 0; j < m; ++j){
            cin >> matrix[i][j];
        }
    }

    //создание массивов для хранения минимального и максимального значения в i-строке
    int* min_in_rows = new int[n];
    int* max_in_rows = new int[n];

    //заполнение этих массивов
    for(int i = 0; i < n; ++i){
        min_in_rows[i] = matrix[i][0];
        max_in_rows[i] = matrix[i][0];
        for(int j = 0; j < m; ++j){
            if(matrix[i][j] < min_in_rows[i]){
                min_in_rows[i] = matrix[i][j];
            }
            else if(matrix[i][j] > max_in_rows[i]){
                max_in_rows[i] = matrix[i][j];
            }
        }
    }

    //создание массивов для хранения минмально и максимального значения в j-столбце
    int* min_in_columns = new int[m];
    int* max_in_columns = new int[m];

    //заполнение этих массивов
    for(int j = 0; j < m; ++j){
        min_in_columns[j] = matrix[0][j];
        max_in_columns[j] = matrix[0][j];
        for(int i = 0; i < n; ++i){
            if(matrix[i][j] < min_in_columns[j]){
                min_in_columns[j] = matrix[i][j];
            }
            else if(matrix[i][j] > max_in_columns[j]){
                max_in_columns[j] = matrix[i][j];
            }
        }
    }

    //вывод
    cout << "Indeces(indexing starts at zero) of saddle points of the matrix: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == min_in_rows[i] && matrix[i][j] == max_in_columns[j]){
                cout << "(" << i << ", " << j << ")" << " ";
            }
            else if(matrix[i][j] == max_in_rows[i] && matrix[i][j] == min_in_columns[j]){
                cout << "(" << i << ", " << j << ")" << " ";
            }
        }
    }

    //очистка памяти
    for(int i = 0; i < n; i++){
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

