#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(){}

void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Destrutor chamado para Zombie: " << this->name << std::endl;
}