
#include "easyfind.hpp"
#include <set>

int main(void)
{
    std::set<int> s;
    for (int i = 0; i < 5; i++)
        s.insert(i);     

    try
    {
        int a = easyfind(s, 4);
        std::cout << a << std::endl;
    }
    catch(std::exception &e){

    }


    return (0);
}
