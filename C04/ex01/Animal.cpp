/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:13:56 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 14:11:23 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Default constructor Animal called" << std::endl;
}

Animal::Animal(const Animal &valor)
{
    std::cout << "Copy constructor Animal called" << std::endl;
    *this = valor;
}

Animal &Animal::operator=(const Animal &valor)
{
    std::cout << "Copy assignment operator Animal called" << std::endl;
    if (this != &valor)
        this->type = valor.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Constructor Animal called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << " Animal" << std::endl;
}

std::string    Animal::getType() const
{
    return (type);
}