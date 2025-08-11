/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:31:06 by aborges           #+#    #+#             */
/*   Updated: 2025/07/11 09:02:02 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hit_point;
    int enrgy_points;
    int attack_damage;
public:
    ClapTrap();
    ClapTrap(const ClapTrap& valor);
    ClapTrap& operator=(const ClapTrap& valor);
    ~ClapTrap();

    ClapTrap(std::string name);
    void    mostrar();
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    std::string    getName();
    int    getDanoAttak();
    int    getPontoVida();
    int    getPontoEnergia();
};

#endif