#include <string>
#include <fstream>
#include <iostream>

void print(const std::string& fileName)
{
    std::ifstream in(fileName);
    std::string line;
    if(in.fail())
    {
        std::cerr << "Error opening file" << std::endl;
    }
    while(std::getline(in, line))
    {
        std::cout << line << std::endl;
    }
    in.close();
    std::cout << "this is the end of the file" << std::endl;
}