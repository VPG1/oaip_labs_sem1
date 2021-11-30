#include <iostream>
using namespace std;

int main(){
    cout << "This program counts the number of local minima in the matrix\n";
    //ввод размерности матрицы
    cout << "Enter the number of rows and columns: ";
    int n, m;
    cin >> n >> m;

    //создание матрицы и ввод её значений 
    cout << "Enter the matrix:\n";
    double** matrix = new double*[n];
    for(int i = 0; i < n; i++){
        matrix[i] = new double[m];
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    
    int count = 0;
    //подсчет количества локальных минимумов
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            double value = matrix[i][j];

            if(i > 0 && matrix[i - 1][j] <= value){
                continue;
            } 
            else if(i < n - 1 && matrix[i + 1][j] <= value){
                continue;
            }
            else if(j > 0 && matrix[i][j - 1] <= value){
                continue;
            }
            else if(j < m - 1 && matrix[i][j + 1] <= value){
                continue;
            }
            else if(i > 0 && j > 0 && matrix[i - 1][j - 1] <= value){
                continue;
            }
            else if(i > 0 && j < m - 1 && matrix[i - 1][j + 1] <= value){
                continue;
            }
            else if(i < n - 1 && j > 0 && matrix[i + 1][j - 1] <= value){
                continue;
            }
            else if(i < n - 1 && j < m - 1 && matrix[i + 1][j + 1] <= value){
                continue;
            }

            else{
                count++;
            }
        }
    }

    //вывод
    cout << "The number of local minima in the matrix equal " <<  count;

    //очистка памяти
    for(int i = 0; i < n; i++){
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
