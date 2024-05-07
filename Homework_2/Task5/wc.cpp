#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main (int argc, char ** argv)
{
    int lines = 0, words = 0, bytes = 0 ;
    std::string line;
   
    while (std::getline(std::cin, line))
    {
        bytes += line.length() + 1;

        lines++;
        
        std::istringstream iss(line);
        std::string word;
        while (iss >> word)
        {
            words++;
        }
               
    
    }

    std::cout << "\t" << lines << "\t" << words <<  "\t" << bytes << std::endl; 
  
}