#include <iostream>
using namespace std;

int main(){
    cout << "The program supplements the input field for the game of sapper with numbers as in the oreganal game\n";
    // ввод размера поля 
    int n, m;
    cout << "Enter the dimensions n and m of the n*m minefield: ";
    cin >> n >> m;

    // выделение динамической памяти
    char** field = (char**)malloc((n + 2) * sizeof(char*));
    for(int i = 0; i < n + 2; ++i){
        field[i] = (char*)malloc((m + 2) * sizeof(char));
    }

    // инициализация "невидимых" краев поля для игры 
    for(int i = 0; i < n + 2; ++i){
        field[i][0] = '.';
        field[i][m + 1] = '.';
    }
    for(int i = 1; i < m + 1; ++i){
        field[0][i] = '.';
        field[n + 1][i] = '.';
    }

    // ввод игрового поля
    for(int i = 1; i < n + 1; ++i){
        for(int j = 1; j < m + 1; ++j){
            cin >> field[i][j]; 
        }
    }

    // дополнение игрового поля числами
    for(int i = 1; i < n + 1; ++i){
        for(int j = 1; j < m + 1; ++j){
            if(field[i][j] == '*'){
                continue;
            }

            char value_of_field = '0';

            //проверка соседних полей на наличие мин
            if(field[i - 1][j] == '*'){
                value_of_field++;
            }
            if(field[i + 1][j] == '*'){
                value_of_field++;
            }
            if(field[i][j - 1] == '*'){
                value_of_field++;
            }
            if(field[i][j + 1] == '*'){
                value_of_field++;
            }

            if(field[i - 1][j - 1] == '*'){
                value_of_field++;
            }
            if(field[i - 1][j + 1] == '*'){
                value_of_field++;
            }
            if(field[i + 1][j - 1] == '*'){
                value_of_field++;
            }
            if(field[i + 1][j + 1] == '*'){
                value_of_field++;
            }

            //замена
            if(value_of_field != '0'){
                field[i][j] = (int)value_of_field;
            }
        }
    }

    //вывод
    cout << "Minefield:\n";
    for(int i = 1; i < n + 1; ++i){
        for(int j = 1; j < m + 1; ++j){
            cout << field[i][j] << " ";
        }
        cout << endl;
    }

    // очистка памяти
    for(int i = 0; i < n + 2; ++i){
        free(field[i]);
    }
    free(field);
    
    return 0;
}