/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:05:38 by aborges           #+#    #+#             */
/*   Updated: 2025/08/14 15:29:48 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCF_H
#define SCF_H
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

#define GREEN "\033[48;2;0;50;0m" "\033[38;2;0;0;0m"
#define FECHA "\033[0m"

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& value);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& value);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(const std::string target);
    void execute(Bureaucrat const & executor) const;
};

#endif