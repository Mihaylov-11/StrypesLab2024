#include <iostream>
#include <cmath>

int main(){

    double R;
    double H;
    double V;


    std::cin >> R;
    std::cin >> H;

    V = 3.14 * (R * R) * H;

    std::cout << V << std::endl;

    return 0;
}