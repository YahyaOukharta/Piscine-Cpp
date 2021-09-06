#include "iter.hpp"

template<typename T>
void print(T e)
{
    std::cout << e << std::endl;
}

int main(void)
{
    int arr[6] = {0, 1, 2, 3, 6, 4};
    ::iter(arr, 6, print);
    
    std::string strarr[3] = {"ee", "gell", "654"};
    ::iter(strarr, 3, print);

    return (0);
}