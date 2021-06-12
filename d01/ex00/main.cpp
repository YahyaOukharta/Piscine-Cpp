#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony stack("Stack Boy", 10, 20);
    stack.put_details();
}

void ponyOnTheHeap()
{
    Pony *heap = new Pony("Heap Boy", 15, 30);
    heap->put_details();
    delete heap;
}

int main(int ac, char **av)
{
    ponyOnTheStack();
    
    ponyOnTheHeap();

    return (0);
}