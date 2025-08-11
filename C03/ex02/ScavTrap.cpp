/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:44:26 by aborges           #+#    #+#             */
/*   Updated: 2025/07/11 10:24:50 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor Initialization ScavTrap called" << std::endl;
    this->name = name;
    this->hit_point = 100;
    this->enrgy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& valor) : ClapTrap(valor)
{
    std::cout << "Copy constructor ScavTrap called" << std::endl;
    *this = valor;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& valor)
{
    std::cout << "Copy assignment operator ScavTrap called" << std::endl;
    if (this != &valor)
    {
        ClapTrap::operator=(valor);
        this->name = valor.name;
        this->hit_point = valor.hit_point;
        this->enrgy_points = valor.enrgy_points;
        this->attack_damage = valor.attack_damage;
    }
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->hit_point == 0)
        std::cout << this->name << "YOU IS DEAD!." << hit_point << std::endl;
    else if (this->enrgy_points == 0)
        std::cout << this->name << " ** YOU HAVE NOT ENERGY ** (" << enrgy_points << ")" << std::endl;
    else if (this->attack_damage == 0)
        std::cout << this->name << "** YOU HAVE NOT TAKEDAMAGE ** "  << attack_damage << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name << " ATTACKA " << target << " CAUSANDO " 
                    << this->attack_damage << " DANOS DE ATTACK!" << std::endl;
        this->enrgy_points -= 1;
    }
}
 
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " #@ IS NOW IN GATEKEEPER MODE";
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called" << std::endl;
}