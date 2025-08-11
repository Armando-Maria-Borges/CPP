/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:34:23 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 14:06:14 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "Default constructor Wrong called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &valor) : WrongAnimal(valor)
{
    std::cout << "Copy constructor Wrong called" << std::endl;
    *this = valor;
}

WrongCat &WrongCat::operator=(const WrongCat &valor)
{
    std::cout << "Copy assignment operator Wrong called" << std::endl;
    if (this != &valor)
    {
        WrongAnimal::operator=(valor);
        this->type = valor.type;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor Wrong called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << this->type << " Som WrongCat" << std::endl;
}