#include <iostream>
#include <string>

class Base
{
    private:

    public:
        virtual ~Base() = 0;
        Base();

};

class A : virtual public Base
{
    public:
        A();
        ~A();    

};

class B : public Base
{
    public:
        B();
        ~B();


};

class C : public Base
{
    public:
        C();
        ~C();

};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);