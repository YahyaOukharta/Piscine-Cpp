#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>

std::string address_to_hex(void *ptr)
{
    std::stringstream stream;
    stream << "0x" << std::hex << ptr;
    return (stream.str());
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    int N = 10;

    Animal *arr[N];
    for (int i = 0; i < N ; i++)
    {
        if(i < N / 2)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }
    for (int i = 0; i < N ; i++)
        delete arr[i];

    Cat a;
    Cat b(a);
    std::cout << "Brain of cat A : " << address_to_hex((void *)a.getBrain()) << std::endl;
    std::cout << "Brain of cat B : " << address_to_hex((void *)b.getBrain()) << std::endl;

    return (0);
}