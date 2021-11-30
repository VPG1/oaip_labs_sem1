#include <iostream>
using namespace std;

void foo(int*& array, int& size, int value){
    size++;
    int* newArray = new int[size];

    for(int i = 1; i < size; i++){
        newArray[i] = array[i - 1];
    }
    newArray[0] = value;
    delete[] array;

    array = newArray;
}

int main(){
    int size = 5;

    int* array = new int[size]{1, 2, 3, 4, 5};
    
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    foo(array, size, 3);

    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}