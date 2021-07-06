#include <string>
#include <iostream>
#include <fstream>

int print_error(int err)
{
    if (err == 0)
        std::cout << "Usage : ./replace filename \"string_to_replace\" \"string_to_replace_with\"" << std::endl;
    if (err == 1)
        std::cout << "Error : replace : string_to_replace and string_to_replace_with shouldn't be empty strings" << std::endl;
    if (err == 2)
        std::cout << "Error : replace : invalid filename" << std::endl;
    
    return (1);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (print_error(0));
        
    if (!strlen(argv[2]) || !strlen(argv[3]))
        return (print_error(1));

    std::ifstream file(argv[1]);
    if (!file.is_open())
        return (print_error(2));

    std::string line;
    std::ofstream output;
    output.open((std::string)argv[1] + ".replace");
    while(std::getline(file, line))
    {
        std::string out_line;
        int pos = 0;
        while ((pos = line.find(argv[2], pos)) != -1)
        {
            out_line += line.substr(0, pos) + (std::string)argv[3];
            line = line.substr(pos + strlen(argv[2]));
        }
        out_line += line;
        output << out_line << "\n";
    }
    file.close();
    output.close();
    return (0);
}
