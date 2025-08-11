#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _nome) : nome(_nome), type(NULL){}

void    HumanB::attack()
{
    std::cout << this->nome << " ataca com seu " << type->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    this->type = &type;
}

HumanB::~HumanB(){}