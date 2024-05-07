#include <iostream>
#include <string>
#include <deque>


int main (int argc, char ** argv)
{
    std::deque<std::string> redove;
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
        redove.push_back(line);

        if (redove.size() > n){
            redove.pop_front();
        }
    }
    for (std::string n : redove){
        std::cout << n << std::endl;
    }
}