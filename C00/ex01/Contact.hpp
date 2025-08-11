/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:40:37 by aborges           #+#    #+#             */
/*   Updated: 2025/06/03 16:17:39 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact
{
    public:
        Contact();

        Contact(int indice, std::string first_name,
            std::string last_name,
            std::string nickname,
            std::string phone_number,
            std::string darkest_secret);
        void mostrar();
        void mostrar_indice();

    private:
        int indice;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif


