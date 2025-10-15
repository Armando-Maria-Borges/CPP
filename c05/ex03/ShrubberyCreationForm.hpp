/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:05:38 by aborges           #+#    #+#             */
/*   Updated: 2025/08/11 11:36:21 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCF_H
#define SCF_H
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

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