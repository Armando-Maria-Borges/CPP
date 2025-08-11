/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:09:44 by aborges           #+#    #+#             */
/*   Updated: 2025/06/02 11:07:43 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(){};

Contact::Contact(int indice,
    std::string first_name,
    std::string last_name,
    std::string nickname,
    std::string phone_number,
    std::string darkest_secret)
{
    this->indice = indice;
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

std::string format(std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return std::string(10 - str.length(), ' ') + str;
}

void    Contact::mostrar()
{
    std::cout <<
    "|" << format(first_name) << 
    "|" << format(last_name) << 
    "|" << format(nickname) <<
    "|" << std::endl;
}

void    Contact::mostrar_indice()
{
    std::cout << std::endl;
    std::cout << "ÍNDICE        : " << indice;
    std::cout << std::endl << "FIRST NAME    : " << first_name << std::endl;
    std::cout << "LAST NAME     : " << last_name << std::endl;
    std::cout << "NICK NAME     : " << nickname << std::endl;
    std::cout << "PHONE NUMBER  : " << phone_number << std::endl;
    std::cout << "DARK SECRET   : " << darkest_secret << std::endl;
}