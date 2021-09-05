#include <iostream>
#include <string>

class Base
{
    private:

    public:
        Base(){};
        virtual ~Base(){};

};

class A :  public Base
{
    public:
        A(){};
        ~A(){};    

};

class B : public Base
{
    public:
        B(){};
        ~B(){};


};

class C : public Base
{
    public:
        C(){};
        ~C(){};

};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);