#include <string>
#include <iostream>
#include <cstring>

std::string str_to_upper(char *str)
{
    std::string up;
    up = "";

    for (int i = 0; i < strlen(str); i++)
        up += toupper(str[i]);

    return (up);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        argv++;
        while (*argv)
        {
            std::cout << str_to_upper(*argv);
            argv++;
        }
    }
    std::cout << std::endl;
    return (0);
}