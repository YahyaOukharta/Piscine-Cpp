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
        void complain_idx(int idx);
        static void debug(void);
        static void info(void);
        static void warning(void);
        static void error(void);
        int index_of_level(std::string lvl);
};

std::string lower_str(std::string str);
std::string upper_str(std::string str);

#endif