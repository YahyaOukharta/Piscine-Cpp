#include <string>
#include <iostream>

template<typename T>
bool easyfind(T container, int n)
{
    try
    {
        return (std::find(container.begin(),container.end(),n)!= container.end());
    }
    catch(std::exception &e)
    {
        throw std::exception();
    }
}