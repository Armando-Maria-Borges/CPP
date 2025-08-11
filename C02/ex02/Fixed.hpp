/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:21:33 by aborges           #+#    #+#             */
/*   Updated: 2025/06/27 15:17:09 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixed_point;
    static const int  number_fractional_bits = 8;
public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed& operator=(const Fixed& copy);
    ~Fixed();

    Fixed(int const value);
    Fixed(float const value);
    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const;

    //operadores de comparação
    bool operator>(const Fixed& maior) const;
    bool operator<(const Fixed& menor) const;
    bool operator>=(const Fixed& maior_igual) const;
    bool operator<=(const Fixed& menor_igual) const;
    bool operator==(const Fixed& igual) const;
    bool operator!=(const Fixed& diferente) const;

    //operadores aritméticos
    Fixed operator+(const Fixed& ad) const;
    Fixed operator-(const Fixed& sub) const;
    Fixed operator*(const Fixed& mult) const;
    Fixed operator/(const Fixed& div) const;

    //operadores de incremento/decremento
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    //min e max
    static Fixed& min(Fixed& pt1, Fixed& pt2);
    static const Fixed& min(const Fixed& pt1, const Fixed& pt2);
    static Fixed& max(Fixed& pt1, Fixed& pt2);
    static const Fixed& max(const Fixed& pt1, const Fixed& pt2);
};

//Sobrecarga do opeerador de insercao
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif