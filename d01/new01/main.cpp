#include <string>
#include <iostream>
#include <sstream>

std::string address_to_hex(void *ptr)
{
    std::stringstream stream;
    stream << "0x" << std::hex << ptr;
    return (stream.str());
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    std::string str = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adress of string       : " << address_to_hex((void *)(&str)) << std::endl;

    std::cout << "Adress using pointer   : " << address_to_hex((void *)stringPTR) << std::endl;
    std::cout << "Adress using reference : " << address_to_hex((void *)(&stringREF)) << std::endl;

    std::cout << "String using pointer   : " << *stringPTR << std::endl;
    std::cout << "String using reference : " << stringREF << std::endl;
    
    return (0);
}