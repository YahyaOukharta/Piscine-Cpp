#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, size_t size, void (*function)(T))
{
    for( size_t i = 0; i < size; i++)
        function(arr[i]);    
}