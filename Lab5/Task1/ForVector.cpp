#include <cmath>

void fill_vector(double*& vector, const int& size){ // функци заполнения вектора 
    for(int i = 0; i < size; ++i){
        vector[i] = 0.1 * tan(0.1 * (i + 1));
    }
}

double product_of_vector(double*& vector1, double*& vector2, const int& size){ // функция произведения вектроров
    double result = 0;
    for(int i = 0; i < size; ++i){
        result += vector1[i] * vector2[i];  
    }
    return result;
}