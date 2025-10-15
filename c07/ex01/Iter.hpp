/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:50:04 by aborges           #+#    #+#             */
/*   Updated: 2025/10/15 13:16:24 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T, typename U>
void    iter(T *array, const size_t len, U funcao)
{
    for (size_t i = 0; i < len; i++)
        funcao(array[i]);
}

template <typename T>
void    show(T valor)
{
    std::cout << "Valor: " << valor << "\n";
}

template <typename T>
size_t    len(T valor)
{
    size_t i = 0;
    while (valor[i])
        i++;
    std::cout << valor << ": tamanho -> " << i << "\n";
    return (i);
}

template <typename T>
void    negative(T valor)
{
    if (valor < 0)
        std::cout << "valor negativo: " << valor << "\n";
}

#endif