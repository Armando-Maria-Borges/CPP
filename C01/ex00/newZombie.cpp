#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zom = new Zombie();
    if (!zom)
    {
        std::cout << "Error" << std::endl;
        return (NULL);
    }
    zom->setName(name);
    return (zom);
}