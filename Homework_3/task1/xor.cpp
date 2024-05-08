#include <iostream>
#include <iomanip>

int main ()
{

    int a, b;
    while (std::cin >> a >> b)
    {
        if((!a && b) || (a && !b))
            std::cout << 1 << std::endl;
        else
            std::cout << 0 << std::endl;
    }

    return 0;

}