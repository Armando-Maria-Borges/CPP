
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _nome, Weapon &_type) :  nome(_nome), type(_type){}

void    HumanA::attack()
{
    std::cout << this->nome << " ataca com seu " << this->type.getType() << std::endl;
}

HumanA::~HumanA(){}