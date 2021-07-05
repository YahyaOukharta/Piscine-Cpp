#include "Karen.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    Karen k;

    k.complain("debug");
    k.complain("info");
    k.complain("warning");
    k.complain("error");

    k.complain("sldkfjs");

    return (0);
}