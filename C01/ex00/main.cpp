
#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie *heap = newZombie("Armando");

    heap->announce();
    randomChump("Borges");

    delete heap;
    return (0);
}