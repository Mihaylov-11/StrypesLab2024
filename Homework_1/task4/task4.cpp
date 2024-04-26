#include <iostream>
#include <limits.h>

int main(){

    double num1, num2, num3;
    double max = INT_MIN;

    std::cin >> num1 >> num2 >> num3;
    
    if (num1 >= max && num1 >= num2 && num1 >= num3){
        max = num1;
    } else if (num2 >= max && num2 >= num1 && num2 >=num3){
        max = num2;
    }else if(num3 >= max && num3 >= num1 & num3 >= num2){
        max = num3;
    }

    std::cout << max << std::endl;

    return 0;

}