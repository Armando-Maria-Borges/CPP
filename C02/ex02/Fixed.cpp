/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:21:40 by aborges           #+#    #+#             */
/*   Updated: 2025/06/27 17:11:28 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    if (this != &copy)
    {
        this->fixed_point = copy.getRawBits();
    }
    return (*this);
}

//#####################
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
}

Fixed::Fixed(const float value)
{
    fixed_point = (static_cast<int>(roundf(value * (1 << number_fractional_bits))));
}

int Fixed::toInt(void) const
{
    return fixed_point >> number_fractional_bits;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->fixed_point) / (1 << number_fractional_bits);
}

Fixed::~Fixed(){}

//COMPARACAO
bool Fixed::operator>(const Fixed& maior) const
{
    return (this->fixed_point > maior.fixed_point);
}

bool Fixed::operator<(const Fixed& menor) const
{
    return (this->fixed_point < menor.fixed_point);
}

bool Fixed::operator>=(const Fixed& maior_igual) const
{
    return (this->fixed_point >= maior_igual.fixed_point);
}

bool Fixed::operator<=(const Fixed& menor_igual) const
{
    return (this->fixed_point <= menor_igual.fixed_point);
}

bool Fixed::operator==(const Fixed& igual) const
{
    return (this->fixed_point == igual.fixed_point);
}

bool Fixed::operator!=(const Fixed& diferente) const
{
    return (this->fixed_point != diferente.fixed_point);
}

//operadores aritméticos
Fixed Fixed::operator+(const Fixed& ad) const
{
    return (this->fixed_point + ad.fixed_point);
}

Fixed Fixed::operator-(const Fixed& sub) const
{
    return (this->fixed_point - sub.fixed_point);
}

Fixed Fixed::operator*(const Fixed& mult) const
{
    Fixed result;
    result.fixed_point = (this->fixed_point * mult.fixed_point) >> number_fractional_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed& div) const
{
    if (div.fixed_point == 0)
    {
        std::cerr << "Erro: divisão por zero!" << std::endl;
        return Fixed(0);
    }
    Fixed result;
    result.fixed_point = (this->fixed_point << number_fractional_bits) / div.fixed_point;
    return result;
}


//operadores de incremento/decremento
Fixed& Fixed::operator++()
{
    ++fixed_point;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++fixed_point;
    return tmp;
}

Fixed& Fixed::operator--()
{
    --fixed_point;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --fixed_point;
    return tmp;
}

//min
Fixed& Fixed::min(Fixed& pt1, Fixed& pt2)
{
    if (pt1.fixed_point <= pt2.fixed_point)
        return (pt1);
    else
        return (pt2);
}

const Fixed& Fixed::min(const Fixed& pt1, const Fixed& pt2)
{
    if (pt1.fixed_point <= pt2.fixed_point)
        return (pt1);
    else
        return (pt2);
}

//max
Fixed& Fixed::max(Fixed& pt1, Fixed& pt2)
{
    if (pt1.fixed_point >= pt2.fixed_point)
        return (pt1);
    else
        return (pt2);
}

const Fixed& Fixed::max(const Fixed& pt1, const Fixed& pt2)
{
    if (pt1.fixed_point >= pt2.fixed_point)
        return (pt1);
    else
        return (pt2);
}