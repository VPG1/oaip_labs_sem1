#include <iostream>
using namespace std;

bool __true(const int& number){ // функция возращающая true при любых number
    return true;
}
bool __true(const double& number){
    return true;
}

//функция ввода и её перегрузка с проверкой корректности ввода
void input(int& number, bool(*condition)(const int& _number)){ // для int
    while(!(cin >> number) && !condition(number)){
        cout << "Incorrect output of the last line. Try again." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}
void input(double& number, bool(*condition)(const double& _number)){ // для double
    while(!(cin >> number) && !condition(number)){
        cout << "Incorrect output of the last line. Try again." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
}