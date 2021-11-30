#include <iostream>
using namespace std;

int main() {
    //ввод данных
    int h1, min1, h2, min2;
    cout << "Enter start time: ";
    cin >> h1 >> min1;
    cout << "Enter end time: ";
    cin >> h2 >> min2;

    //изменения значения часов на электронных часах
    int delta_h = h2 - h1;

    //изменения значения минут на электронных часах
    int delta_min = min2 - min1;

    //нахождение прошедшего времени в минутах
    int time_passed_in_minutes = (delta_h * 60 + delta_min + 1440) % 1440;

    //нахождение прошедшего времени в часах и минутах
    int hourse_passed = time_passed_in_minutes / 60;
    int minutes_passed = time_passed_in_minutes % 60;

    //вывод
    cout << "student solved this problem " << hourse_passed << " hours and " << minutes_passed << " minutes" << endl;

    return 0;
}
