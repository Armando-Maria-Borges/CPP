/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:35:59 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:26:18 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Default constructor Cat called" << std::endl;
}

Cat::Cat(const Cat &valor) : Animal(valor)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = valor;
}

Cat &Cat::operator=(const Cat &valor)
{
    std::cout << "Copy assignment operator Cat called" << std::endl;
    if (this != &valor)
    {
        Animal::operator=(valor);
        this->type = valor.type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << this->type << " mía" << std::endl;
}