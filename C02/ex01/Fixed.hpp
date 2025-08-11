/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:46:31 by aborges           #+#    #+#             */
/*   Updated: 2025/06/23 09:10:50 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

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
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif