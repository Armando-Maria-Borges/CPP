/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:40:42 by aborges           #+#    #+#             */
/*   Updated: 2025/06/02 10:31:25 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        void adicionar(Contact contact);
        void mostrar();
        void mostrar_indice(int indice);
    private:
        int size;
        int old;
        Contact element[8];
};


#endif