#include "serialization.hpp"

uintptr_t serialize(Data *ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}
int main(void)
{
    Data *hello = new Data(10, "Hello World");

    uintptr_t raw = serialize(hello);

    Data *original = deserialize(raw);

    std::cout << original->s << ", "<< original->a << std::endl;
    return (0);
}

