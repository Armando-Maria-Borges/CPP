/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:44:21 by aborges           #+#    #+#             */
/*   Updated: 2025/07/14 08:31:30 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const ScavTrap& valor);
    ScavTrap& operator=(const ScavTrap& valor);
    ~ScavTrap();

    ScavTrap(std::string name);
    
    void attack(const std::string& target);
    void guardGate();    
};

#endif