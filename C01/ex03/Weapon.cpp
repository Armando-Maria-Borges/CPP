
#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
    setType(type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType()
{
    const std::string& tp = this->type;
    return (tp);
}

Weapon::~Weapon(){}