/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:27:21 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:32:49 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "Default constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &valor)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = valor;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &valor)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &valor)
        this->type = valor.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << this->type << " WrongAnimal" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return (type);
}