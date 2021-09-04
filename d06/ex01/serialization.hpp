#include <iostream>
#include <string>

class Data
{
    public:
        Data(int _a, std::string _s):a(_a),s(_s){};
        ~Data();
        int         a; 
        std::string s;
};

uintptr_t   serialize(Data *ptr);
Data        *deserialize(uintptr_t raw);
