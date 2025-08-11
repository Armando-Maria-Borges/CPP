/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:28:46 by aborges           #+#    #+#             */
/*   Updated: 2025/06/03 14:58:14 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    this->size = 0;
    this->old = 0;
}

void PhoneBook::adicionar(Contact contact)
{
    if (this->size == 8)
    {
        this->element[this->old] = contact;
        this->old++;
        if (this->old == 8)
            this->old = 0;
    }
    else
    {
        this->element[this->size] = contact;
        this->size++;
    }
}

void    PhoneBook::mostrar()
{
    std::cout << "____________________________________" << std::endl;
    std::cout << "|N| FIRST N. |  LAST N. |  NICK N. |" << std::endl;
    std::cout << "____________________________________" << std::endl;
    for (int i = 0; i < this->size; i++)
    {
        std::cout << "|" << i; 
        this->element[i].mostrar();
        std::cout << "____________________________________" << std::endl;
    }
}

void    PhoneBook::mostrar_indice(int indice)
{
    for (int i = 0; i < this->size; i++)
    {
        if (i == indice)
        {
            this->element[i].mostrar_indice();
            break ;
        }
    }
}