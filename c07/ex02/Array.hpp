/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:56:52 by aborges           #+#    #+#             */
/*   Updated: 2025/10/27 16:04:33 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
    T *array;
    int len;
public:
    Array()
    {
        this->array = NULL;
        this->len = 0;
    }

    Array(unsigned int n)
    {
        len = n;
        array = new T[n];
    }

    Array(const Array& valor)
    { 
        std::cout << "Construtor de cópia chamado\n";
        this->array = new T[valor.len];
        len = valor.len;

        for (int i = 0; i < len; i++)
            this->array[i] = valor.array[i];
    }

    Array& operator=(const Array& valor)
    {
        std::cout << "Operador de atribuição chamado\n";
        if (this == &valor)
            return *this;

        delete [] this->array;
        len = valor.len;
        this->array = new T[len];
        
        for (int i = 0; i < len; i++)
            this->array[i] = valor.array[i];
        return *this;
    }

    T& operator[](int indice) // Operador de subscrito
    {
        if (indice < 0 || indice >= this->len)
            throw std::out_of_range("indice fora do intervalo");
        return array[indice];
    }

    const T& operator[](int indice) const
    {
        if (indice < 0 || indice >= this->len)
            throw std::out_of_range("indice fora do intervalo");
        return array[indice];
    }

    int size() const
    {
        return len; 
    }

    ~Array()
    {
        delete[] array;
    }
};

#endif