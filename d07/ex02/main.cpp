#include "Array.hpp"



int main(void)
{
    Array<int> arr(6);

    for (size_t i = 0; i < arr.size(); i++)
    {
        arr[i] = i + 10;
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }

    try {
        arr[5] = 123456;
        std::cout << arr[5] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Array<int> arrr;
    arrr = arr;
    for (size_t i = 0; i < arrr.size(); i++)
    {
        std::cout << arrr[i] << std::endl;
    }
    return (0);
}