
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string nome;
    Weapon &type;
public:
    HumanA();
    HumanA(std::string _nome, Weapon &_type);
    void    attack();
    ~HumanA();
};

#endif