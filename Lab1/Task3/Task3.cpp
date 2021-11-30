#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //ввод кординат точек A, B и C
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates of points A, B and C: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    //нахождение длин всех сторон треугольника
    double AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double BC = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double CA = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

    //нахождение периметра, полупериметра и площади
    double P = AB + BC + CA;
    double p = P / 2;
    double S = sqrt(p * (p - AB) * (p - BC) * (p - CA));

    //нахождение длин всех высот треугольника
    double height_to_AB = 2 * S / AB;
    double height_to_BC = 2 * S / BC;
    double height_to_CA = 2 * S / CA;

    //нахождение длин всех медиан треугольника
    double median_to_AB = sqrt(2 * pow(BC, 2) + 2 * pow(CA, 2) - pow(AB, 2)) / 2;
    double median_to_BC = sqrt(2 * pow(AB, 2) + 2 * pow(CA, 2) - pow(BC, 2)) / 2;
    double median_to_CA = sqrt(2 * pow(AB, 2) + 2 * pow(BC, 2) - pow(CA, 2)) / 2;

    //нахождение длин всех биссектрис треугольника
    double bisector_to_AB = sqrt(BC * CA * (BC + CA + AB) * (BC + CA - AB)) / (BC + CA);
    double bisector_to_BC = sqrt(AB * CA * (AB + CA + BC) * (AB + CA - BC)) / (AB + CA);
    double bisector_to_CA = sqrt(AB * BC * (AB + BC + CA)* (AB + BC - CA)) / (AB + BC);

    //вычисление числа пи
    double pi = asin(1) * 2;

    //нахождение градусной и радианой меры углов треугольника
    double angle_ACB_in_rad = acos((pow(BC, 2) + pow(CA, 2) - pow(AB, 2)) / (2 * BC * CA));
    double angle_BAC_in_rad = acos((pow(AB, 2) + pow(CA, 2) - pow(BC, 2)) / (2 * AB * CA));
    double angle_ABC_in_rad = acos((pow(AB, 2) + pow(BC, 2) - pow(CA, 2)) / (2 * AB * BC));
    double angle_ACB_in_deg = 180 * angle_ACB_in_rad / pi;
    double angle_BAC_in_deg = 180 * angle_BAC_in_rad / pi;
    double angle_ABC_in_deg = 180 * angle_ABC_in_rad / pi;

    //нахождение площади ещё двумя способами
    S = height_to_AB * AB / 2;
    S = (BC * CA * cos(angle_ACB_in_rad)) / 2;

    //нахождение радиуса вписанной окружности
    double r = S / p;

    //нахождение радиуса описанной окружности
    double R = AB * BC * CA / (4 * S);

    //нахождение длинны и площади вписанной окружности
    double L_of_the_inscribed_circle = 2 * pi * r;
    double S_of_the_inscribed_circle = pi * pow(r, 2);

    //нахождение длины и площади описанной окружности
    double L_of_the_circumscribed_circle = 2 * pi * R;
    double S_of_the_circumscribed_circle = pi * pow(R, 2);


    //вывод
    cout << "1.The lengths of the sides of the triangle AB, BC and AC are respectively equal: " << AB << ", " << BC << " and " << CA << endl;
    cout << "2.The lengths of the heights drawn to the sides of the triangle AB, BC and AC are respectively equal: " << height_to_AB << ", " << height_to_BC << " and " << height_to_CA << endl;
    cout << "3.The lengths of the medians drawn to the sides of the triangle AB, BC and AC are respectively equal: " << median_to_AB << ", " << median_to_BC << " and " << median_to_CA << endl;
    cout << "4.The lengths of the bisector drawn to the sides of the triangle AB, BC and AC are respectively equal:" << bisector_to_AB << ", " << bisector_to_BC << " and " << bisector_to_CA << endl;
    cout << "5.Degree measures of the angles" << " ACB = " << angle_ACB_in_deg << " BAC = " << angle_BAC_in_deg << " ABC = " << angle_ABC_in_deg << endl;
    cout << "Radian measures of the angles" << " ACB = " << angle_ACB_in_rad << " BAC = " << angle_BAC_in_rad << " ABC = " << angle_ABC_in_rad << endl;
    cout << "6.The radius of the inscribed circle is equal " << r << " the radius of the circumscribed circle is equal " << R << endl;
    cout << "7.The length of the inscribed circle is equal " << L_of_the_inscribed_circle << " the area of the inscribed circle is equal " << S_of_the_inscribed_circle << endl;
    cout << "The length of the circumscribed circle is equal " << L_of_the_circumscribed_circle << " the area of the circumscribed circle is equal " << S_of_the_circumscribed_circle << endl;
    cout << "8.The area and perimeter of the triangle are equal, respectively: " << S << " and " << P << endl;

    return 0;
}
