/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:50:04 by aborges           #+#    #+#             */
/*   Updated: 2025/10/09 17:36:39 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T aux;
    aux = a;
    a = b;
    b = aux;
}

template <typename T>
T min(T a, T b)
{
    if (b <= a)
        return b;
    else
        return a;
}

template <typename T>
T max(T a, T b)
{
    if (b >= a)
        return b;
    else
        return a;
}

#endif