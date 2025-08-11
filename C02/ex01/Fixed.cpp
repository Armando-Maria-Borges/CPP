/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 10:04:23 by aborges           #+#    #+#             */
/*   Updated: 2025/06/27 19:23:19 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->fixed_point = copy.getRawBits();
    }
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    return (fixed_point);
}

Fixed::Fixed(const int value)
{
    fixed_point = (value << number_fractional_bits);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    fixed_point = (static_cast<int>(roundf(value * (1 << number_fractional_bits))));
    std::cout << "Float constructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    return fixed_point >> number_fractional_bits;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->fixed_point) / (1 << number_fractional_bits);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}