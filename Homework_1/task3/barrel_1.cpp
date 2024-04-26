#include <iostream>
#include <cmath>

int main(){

    double R;
    double H;
    double L;

    double area;

    std::cin >> R;
    std::cin >> L;
    std::cin >> H;

    area = acos((R - H) / R) * pow(R, 2) - (R - H) * sqrt(2 * R * H - pow(H, 2));

    std::cout << area << std::endl;

    return 0;
}
