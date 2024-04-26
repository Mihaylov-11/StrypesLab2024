#include <iostream>
#include <cmath>

int main(){

    double kg;
    double height;
    double bmi;
    double bmiNew;

    std::cin >> kg;
    std::cin >> height;

    bmi = kg / (height * height);

    std::cout << bmi << std::endl;

    bmiNew = 1.3 * (kg / pow(height,2.5));

    std::cout << bmiNew << std::endl;

    return 0;

}