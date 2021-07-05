#include "Karen.hpp"

std::string lower_str(std::string str)
{
    std::string out;
    for (size_t i = 0; i < str.size(); i++)
    {
        out += std::tolower(str[i]);
    }
    return (out);
}

std::string upper_str(std::string str)
{
    std::string out;
    for (size_t i = 0; i < str.size(); i++)
    {
        out += std::toupper(str[i]);
    }
    return (out);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (1);

    Karen k;

    int idx = k.index_of_level(lower_str((std::string)av[1]));

    // if (idx == -1)
    // {
    //     std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    //     return (0);
    // }
    // for (int i = idx; i < 4; i++)
    // {
    //     k.complain_idx(i);
    //     std::cout << std::endl;
    // }

    switch (idx)
    {
        case 0:            
            k.complain_idx(idx);
            idx++;

        case 1:
            k.complain_idx(idx);
            idx++;

        case 2:
            k.complain_idx(idx);
            idx++;

        case 3:
            k.complain_idx(idx);
            break;

        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }

    return (0);
}