#include "Pony.hpp"

Pony::Pony()
{
    name = "PonyName";
    age = 20;
    size = 10;
}

Pony::Pony(std::string n, int a, int s)
{
    name = n;
    age = a;
    size = s;
}

Pony::~Pony()
{
    std::cout << "RIP Pony " << name << ", died at age " << age<<std::endl;
}

void Pony::put_details()
{
    std::cout << "Name : "<< name << " Size : " << size << " Age : " << age << std::endl; 
}