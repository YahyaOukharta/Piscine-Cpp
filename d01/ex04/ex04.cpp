#include <string>
#include <iostream>

int main(int argc, char **argv)
{
    std::string s = "HI THIS IS BRAIN";

    std::string *pointer = &s;
    std::string &reference = s; // references should always be declared and initialized at the same time !

    std::cout << "Using Pointer   : " << *pointer << std::endl;
    std::cout << "Using Reference : " << reference << std::endl;
    
    return (0);
}