/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:35:59 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:58:13 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->br = new Brain();
    std::cout << "Default constructor Cat called" << std::endl;
}

Cat::Cat(const Cat &valor) : Animal(valor)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    this->br = new Brain(*valor.br);
    this->type = valor.type;
}

Cat &Cat::operator=(const Cat &valor)
{
    std::cout << "Copy assignment operator Cat called" << std::endl;
    if (this != &valor)
    {
        Animal::operator=(valor);
        this->type = valor.type;
        if (this->br)
            delete this->br;
        this->br = new Brain(*valor.br);
    }
    return *this;
}

Cat::~Cat()
{
    delete this->br;
    std::cout << "Destructor Cat called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->type << " mía" << std::endl;
}