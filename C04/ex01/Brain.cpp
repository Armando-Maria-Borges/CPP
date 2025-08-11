/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:41:10 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:36:37 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor Brain called" << std::endl;
}

Brain::Brain(const Brain &valor)
{
    std::cout << "Copy constructor Brain called" << std::endl;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = valor.ideas[i];
}

Brain &Brain::operator=(const Brain &valor)
{
    std::cout << "Copy assignment operator Brain called" << std::endl;
    if (this != &valor)
    {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = valor.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
}