# include "Span.hpp"

int main()
{
    Span sp = Span(20);

    sp.addNumber(5);
    sp.addNumber(50);
    sp.addNumber(-5000);


    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}