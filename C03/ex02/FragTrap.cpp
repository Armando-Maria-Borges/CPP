/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:46:50 by aborges           #+#    #+#             */
/*   Updated: 2025/07/14 12:56:19 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor Initialization FragTrap called" << std::endl;
    this->name = name;
    this->hit_point = 100;
    this->enrgy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& valor) : ClapTrap(valor)
{
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = valor;
}

FragTrap& FragTrap::operator=(const FragTrap& valor)
{
    std::cout << "Copy assignment operator FragTrap called" << std::endl;
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

void    FragTrap::attack(const std::string& target)
{
    if (this->hit_point == 0)
        std::cout << this->name << "YOU IS DEAD!." << hit_point << std::endl;
    else if (this->enrgy_points == 0)
        std::cout << this->name << " ** YOU HAVE NOT ENERGY ** (" << enrgy_points << ")" << std::endl;
    else if (this->attack_damage == 0)
        std::cout << this->name << "** YOU HAVE NOT TAKEDAMAGE ** "  << attack_damage << std::endl;
    else
    {
        std::cout << "FragTrap " << this->name << " ATTACKA " << target << " CAUSANDO " 
                    << this->attack_damage << " DANOS DE ATTACK!" << std::endl;
        this->enrgy_points -= 1;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "CONGRATULATIONS (HIGT-FIVE), YOU'RE STILL STANDING" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called" << std::endl;
}