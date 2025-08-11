/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:18:33 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:26:32 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Default constructor Dog called" << std::endl;
}

Dog::Dog(const Dog &valor) : Animal(valor)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = valor;
}

Dog& Dog::operator=(const Dog &valor)
{
    std::cout << "Copy assignment operator Dog called" << std::endl;
    if (this != &valor)
    {
        Animal::operator=(valor);
        this->type = valor.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << this->type << " late" << std::endl;
}