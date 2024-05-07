#include <iostream>
#include <string>

int main (int argc, char ** argv)
{

    std::string line;
    int n = 10;
    if (argc == 2){
        n = std::stoi(argv[1]);
    }
    else if (argc > 2){
        return 1;
    }
    while (std::getline(std::cin,line))
    {
        std::cout << line << std::endl;
        n--;
        if(n ==0){
            break;
        }
    }
    

}