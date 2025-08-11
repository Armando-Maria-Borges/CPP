/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 23:33:46 by aborges           #+#    #+#             */
/*   Updated: 2025/06/30 10:24:41 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
{
    //number_fractional_bits = 8;
    std::cout << "Default constructor called" << std::endl; 
    setRawBits(0);
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->fixed_point = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point);
}

void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}