/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:15:54 by aborges           #+#    #+#             */
/*   Updated: 2025/08/14 15:39:56 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << GREEN << "Default construct Intern called" << FECHA << std::endl;
}

Intern::~Intern()
{
    std::cout << GREEN << "Destruct Intern called" << FECHA << std::endl;
}

AForm* Intern::obj(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::obj2(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm* Intern::obj3(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm*    Intern::makeForm(std::string form_name, std::string form_dest)
{
    std::string    form[] = 
    {"ShrubberyCreationForm", 
     "RobotomyRequestForm",
     "PresidentialPardonForm"};

    AForm* (Intern::*ptr[3])(std::string);
    ptr[0] = &Intern::obj;
    ptr[1] = &Intern::obj2;
    ptr[2] = &Intern::obj3;

    int i = 0;
    while (i < 3)
    {
        if (form[i] == form_name)
        {
            std::cout << "Estagiário cria " << form_name << std::endl;
            return (this->*ptr[i])(form_dest);
        }
        i++;
    }
    std::cout << form_name << " Não encontrado\n";
    return (NULL);
}