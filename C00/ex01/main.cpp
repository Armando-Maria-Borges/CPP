/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:23:40 by aborges           #+#    #+#             */
/*   Updated: 2025/06/03 14:58:25 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int  check_empty(std::string& str)
{
     if (str.compare(NULL))
         return (0);
     return (1);
}

void    menu()
{
    std::cout << std::endl << "ADD    -> PARA ADICIONAR";
    std::cout << std::endl << "SEARCH -> PARA PESQUISAR";
    std::cout << std::endl << "EXIT   -> PARA SAIR" << std::endl;
}

int ft_isalfa(std::string str)
{
    for (unsigned int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') 
        || (str[i] >= 'a' && str[i] <= 'z') 
        || str[i] == ' ')
        {
            continue;
        }
        else
            return (0);
    }
    return (1);
}

int ft_isnumber(std::string str)
{
    int n = 0;

    for (unsigned int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 0 && str[i] <= '9')
        {
            n++;
            continue;
        }
        else
            return (0);
    }
    if (n < 9)
        return (0);
    return (1);
}


int main()
{
    PhoneBook phone;

    std::string op;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    int indice;
    int i = 0;

    menu();
    while (1)
    {
        std::cout << std::endl << "Insira a opção: ";
        //std::cin >> op;
        if (!std::getline(std::cin, op))
            return (1);
        //std::cin.ignore();
        
        if (op == "ADD")
        {
            std::cout << std::endl << "Insira o primeiro nome      : ";
            if (!std::getline(std::cin, first_name))
                return (1);
            if (first_name.empty() || !ft_isalfa(first_name))
            {
                std::cout << "Valor inválido";
                continue;
            }

            std::cout << "Insira o último nome        : ";
            if (!std::getline(std::cin, last_name))
                return (1);
            if (last_name.empty())
            {
                std::cout << "Valor inválido";
                continue;
            }

            std::cout << "Insira o apelido            : ";
            if (!std::getline(std::cin, nickname))
                return (1);
            if (nickname.empty())
            {
                std::cout << "Valor inválido";
                continue;
            }

            std::cout << "Insira o número de telefone : ";
            if (!std::getline(std::cin, phone_number))
                return (1);
            if (phone_number.empty() || !ft_isnumber(phone_number))
            {
                std::cout << "Valor inválido";
                continue;
            }

            std::cout << "Insira o segredo obscuro    : ";
            if (!std::getline(std::cin, darkest_secret))
                return (1);
            if (darkest_secret.empty())
            {
                std::cout << "Valor inválido";
                continue;
            }

            Contact ct(i, first_name, last_name, nickname, phone_number, darkest_secret);
            phone.adicionar(ct);
            i++;
            if (i == 8)
                i = 0;
        }
        else if (op == "SEARCH")
        {
            phone.mostrar();
            std::cout << "Insira o índice: ";
            
            std::cin >> indice;
            std::cin.ignore();
            if (indice >= 0 && indice <= 8)
                phone.mostrar_indice(indice);
            else
                std::cout << "Indice fora do inervalo";
        }
        else if (op == "EXIT")
        {
            return (0);
        }
        else
            std::cout << std::endl << "Opção inválida" << std::endl;
    }
    return (0);
}