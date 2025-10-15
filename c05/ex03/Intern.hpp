/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:06:04 by aborges           #+#    #+#             */
/*   Updated: 2025/08/14 15:40:08 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
#define INTER_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

#define GREEN "\033[48;2;0;50;0m" "\033[38;2;0;0;0m"
#define FECHA "\033[0m"

class Intern
{
public:
    Intern();
    ~Intern();

    AForm* obj(std::string target);
    AForm* obj2(std::string target);
    AForm* obj3(std::string target);
    
    AForm*    makeForm(std::string form_name, std::string form_dest);
};


#endif