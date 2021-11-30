#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "This program multiplies matrices A and B\n";
    // ввод размера матрицы A
    int n, m; // n кол-во строк матрицы A   m кол-во столбцов матрицы A
    cout << "Enter the number of rows and columns of matrix A: ";
    cin >> n >> m;

    // ввод элементов матирцы A и выделение памяти под эту матрицы
    cout << "Enter elements of matrix A:\n";
    int** A = (int**)malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i){
        A[i] = (int*)malloc(m * sizeof(int));
        
        for(int j = 0; j < m; ++j){
            cin >> A[i][j];
        }
    }

    // ввод размера матрицы B
    int l, k; // l кол-во строк матрицы B   k кол-во столбцов матрицы B 
    cout << "Enter the number of rows and columns of matrix B: ";
    cin >> l >> k; 

    // ввод элементов матирцы B и выделение памяти под эту матрицы
    cout << "Enter elements of matrix B:\n";
    int** B = (int**)malloc(l * sizeof(int*));
    for(int i = 0; i < l; ++i){
        B[i] = (int*)malloc(k * sizeof(int));
        for(int j = 0; j < k; ++j){
            cin >> B[i][j];
        }
    }

    // проверка на совместимость A и B
    if(m != l){
        cout << "Matrices are not consistent";
        return 0;
    }

    // умножение матриц и выделение под новую матрицы памяти 
    int** C = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; ++i){
        C[i] = (int*)malloc(k * sizeof(int));

        for(int j = 0; j < k; ++j){
            int newElement = 0;
            for(int t = 0; t < m; ++t){
                newElement += A[i][t] * B[t][j];
            }
            C[i][j] = newElement;
        }
    }


    cout << "////////////////////////////////////////////////////////////////" << endl;

    //вывод
    cout << "The result of matrix multiplication is this matrix:\n";
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < k; ++j){
            cout << setw(4) << left <<  C[i][j] << " ";
        }
        cout << endl;
    }

    // очистка памяти
    for(int i = 0; i < n; ++i){
        free(A[i]);
        free(C[i]);
    }
    free(A);
    free(C);

    for(int i = 0; i < l; ++i){
        free(B[i]);
    }
    free(B);

    return 0;
}