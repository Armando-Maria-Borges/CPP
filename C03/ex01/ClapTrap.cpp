/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:30:32 by aborges           #+#    #+#             */
/*   Updated: 2025/07/14 08:26:18 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// implementaçÃo dos construtores
ClapTrap::ClapTrap()
{
    std::cout << "Default constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor Initialization ClapTrap called" << std::endl;
    this->name = name;
    this->hit_point = 100;
    this->enrgy_points = 50;
    this->attack_damage = 20;
}

ClapTrap::ClapTrap(const ClapTrap &valor)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = valor;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &valor)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &valor)
    {
        this->name = valor.name;
        this->hit_point = valor.hit_point;
        this->enrgy_points = valor.enrgy_points;
        this->attack_damage = valor.attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor ClapTrap called" << std::endl;
}

// Funções adicionais
std::string ClapTrap::getName()
{
    return (this->name);
}

int ClapTrap::getDanoAttak()
{
    return this->attack_damage;
}

int ClapTrap::getPontoVida()
{
    return this->hit_point;
}

int ClapTrap::getPontoEnergia()
{
    return this->enrgy_points;
}

void ClapTrap::mostrar()
{
    std::cout << std::endl;
    std::cout << "NAME              : " << this->name << std::endl;
    std::cout << "HIT POINT         : " << this->hit_point << std::endl;
    std::cout << "ENERGY POINT      : " << this->enrgy_points << std::endl;
    std::cout << "DAMAGE ATTACK     : " << this->attack_damage << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hit_point == 0)
        std::cout << this->name << " YOU IS DEAD!." << hit_point << std::endl;
    else if (this->enrgy_points == 0)
        std::cout << this->name << " ** YOU HAVE NOT ENERGY ** (" << enrgy_points << ")" << std::endl;
    else if (this->attack_damage == 0)
        std::cout << this->name << "** YOU HAVE NOT TAKEDAMAGE ** "  << attack_damage << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " ATTACKS " << target << " CAUSING " 
                << this->attack_damage << " DAMAGE ATTACK" << std::endl;
        this->enrgy_points -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((int)amount > 0)
    {
        std::cout << this->name << " SUFFERED " << amount << " DAMAGES " << std::endl;
        if (this->hit_point == 0)
            std::cout << this->name << " IS ALREADY DEAD!." << hit_point << std::endl;
        else if ((int)amount > this->getPontoVida())
            this->hit_point = 0;
        else
            this->hit_point = this->hit_point - amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((int)amount > 0)
    {
        if (this->enrgy_points == 0)
            std::cout << this->name << " YOU HAVE NOT ENERGY POITS -> " << enrgy_points << std::endl;
        else if (this->hit_point == 0)
            std::cout << this->name << " YOU HAVE NOT HIT POINT -> " << hit_point << std::endl;
        else
        {
            std::cout << std::endl;
            std::cout << this->name << " USE " << amount << " POINTS FOR REPAIRED!" << std::endl;
            this->hit_point += amount;
            this->enrgy_points -= 1;
        }
    }
    else
        std::cout << "INVALID VALUE -> " << amount << std::endl;
}