#include <iostream>
using namespace std;

void input(int& number, const char* str = "Incorrect input. Try again."); // функция ввода c проверкой корректности ввода 

int main(){
    int n, m;
    cout << "Enter N(number of rows): ";
    input(n);
    cout << "Enter M(number of columns): ";
    input(m);



}

void input(int& number, const char* str){
    while(!(cin >> number)){
        cout << str << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}