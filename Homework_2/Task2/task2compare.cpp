#include <iostream>
#include <cmath>

bool compareFloat (float a, float b){
    const float epsilon = 0.00001f;
    return fabs(a - b) < epsilon;
}

bool compareDouble (double a, double b){
    const double epsilon = 0.0000000001;
    return fabs(a - b) < epsilon;
}

bool compareFloatAndDouble (float a, double b){
    const double epsilon = 0.0000000001;
    return fabs(a - static_cast<float>(b)) < epsilon;
}

int main(){
    float floatNum1, floatNum2;
    double doubleNum1, doubleNum2;

    std::cout << "Enter float numbers: " << std::endl;
    std::cin >> floatNum1 >> floatNum2;

    std::cout << "Enter double numbers: " << std::endl;
    std::cin >> doubleNum1 >> doubleNum2;

    std::cout << "\nFloat comparison: " << std::endl;
    std::cout << floatNum1 << " == " << floatNum2 << " : " << (compareFloat(floatNum1, floatNum2) ? "true" : "false") << std::endl;

    std::cout << "\nDouble comparison: " << std::endl;
    std::cout << doubleNum1 << " == " << doubleNum2 << " : " << (compareDouble(doubleNum1, doubleNum2) ? "true" : "false") << std::endl;

    std::cout << "\nComparison between float and double: " << std::endl;
    std::cout << floatNum1 << " == " << doubleNum2 << " : " << (compareFloatAndDouble(floatNum1, doubleNum2) ? "true" : "false") << std::endl;

    return 0;
}