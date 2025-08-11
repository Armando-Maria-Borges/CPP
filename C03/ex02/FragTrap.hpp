/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:46:38 by aborges           #+#    #+#             */
/*   Updated: 2025/07/14 12:48:23 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const FragTrap& valor);
    FragTrap& operator=(const FragTrap& valor);
    ~FragTrap();

    FragTrap(std::string name);
    
    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif