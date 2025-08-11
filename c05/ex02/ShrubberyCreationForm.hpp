/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:05:38 by aborges           #+#    #+#             */
/*   Updated: 2025/08/08 10:33:06 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCF_H
#define SCF_H
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& value);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& value);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(const std::string name, bool assin, const int assinGrade, const int execuGrade);
    ShrubberyCreationForm(std::string target);
    std::string  getName() const;

    void         execute(Bureaucrat const & executor) const;
};

#endif