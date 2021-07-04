#ifndef __KAREN_HPP__
# define __KAREN_HPP__
# include <iostream>
# include <string>

typedef void (*func)(void);
class Karen
{
    private:
        func loglevels[4];
        std::string levels[4];

    public:
        Karen(void);
        void complain(std::string level);
        static void debug(void);
        static void info(void);
        static void warning(void);
        static void error(void);
};

#endif