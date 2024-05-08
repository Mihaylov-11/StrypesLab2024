#include <iostream>
#include <iomanip>
#include <vector>

void synthesis1(int a, int b, int c)
{
    if ((!a && !b && !c) || (!a && b && !c) || (!a && b && c) || (a && b && c))
        std::cout << 1 << std::endl;
    else
        std::cout << 0 << std::endl;
}

void synthesis0(int a, int b, int c)
{
    if ((a || b || !c) && (!a || b || c) && (!a || b || !c) && (!a || !b || c))
        std::cout << 1 << std::endl;
    else
        std::cout << 0 << std::endl;
}
int main()
{
    int a, b, c;
    std::vector<int> abc;

    while (std::cin >> a >> b >> c)
    {
        abc.push_back(a);
        abc.push_back(b);
        abc.push_back(c);
    }

    std::cout << "Synthesis by 1" << std::endl;
    for (unsigned int i = 0; i < abc.size(); i += 3)
    {
        synthesis1(abc[i], abc[i + 1], abc[i + 2]);
    }

    std::cout << "Synthesis by 0" << std::endl;
    for (unsigned int i = 0; i < abc.size(); i += 3)
    {
        synthesis0(abc[i], abc[i + 1], abc[i + 2]);
    }

    return 0;
}