#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zomb = new Zombie[N];

    if (!zomb)
    {
        std::cout << "Error" << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
        zomb[i].setName(name);
    return (zomb);
}