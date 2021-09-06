#include "identify.hpp"


Base * generate(void)
{
    srand(time(NULL));
    int r = rand()%100;

    if ( r < 33)
        return (new A());
    else if (r < 66)
        return (new B());
    else 
        return (new C());
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &tmp = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        (void)tmp;
    }
    catch(std::exception &e)
    {
        try
        {
            B &tmp = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
            (void)tmp;
        }
        catch(std::exception &e)
        {
            try
            {
                C &tmp = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
                (void)tmp;
            }
            catch(std::exception &e)
            {

            }
        }
    }

}

int main(void)
{

    Base *r =  generate();
    identify(*r);


    return (0);
}