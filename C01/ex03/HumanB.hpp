
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string nome;
    Weapon  *type;
public:
    HumanB();
    HumanB(std::string _nome);
    void setWeapon(Weapon &type);
    void    attack();
    ~HumanB();
};

#endif