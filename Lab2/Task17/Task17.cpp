#include <iostream>
using namespace std;

int main(){
    //ввод данных
    cout << "Enter W and H: ";
    int W, H;
    cin >> W >> H;
    cout << "Enter x1, y1, x2 and y2: ";
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Enetr w, h: ";
    int w, h;
    cin >> w >> h;

    //определение минимального растояния смещения и вывод
    if(w + x2 - x1 <= W && h + y2 - y1 <= H){
        int min_distance_x, min_distance_y;
        W - x2 > x1 ? min_distance_x = w - (W - x2) : min_distance_x = w - x1;
        H - y2 > y1 ? min_distance_y = h - (H - y2) : min_distance_y = h - y1;

        if(min_distance_x <= 0 || min_distance_y <= 0){
            cout << 0;
            return 0;
        }
        min_distance_x > min_distance_y ? cout << min_distance_y : cout << min_distance_x;
    }
    else if(w + x2 - x1 <= W){
        int min_distance_x;
        W - x2 > x1 ? min_distance_x = w - (W - x2) : min_distance_x = w - x1;
        
        if(min_distance_x <= 0){
            cout << 0;
            return 0;
        }
        cout << min_distance_x;
    }
    else if(h + y2 - y1 <= H){
        int min_distance_y;
        H - y2 > y1 ? min_distance_y = h - (H - y2) : min_distance_y = h - y1;

        if(min_distance_y <= 0){
            cout << 0;
            return 0;
        }
        cout << min_distance_y;
    }
    else{
        cout << - 1;
    }
    
    return 0;
}