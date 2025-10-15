/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:38:17 by aborges           #+#    #+#             */
/*   Updated: 2025/08/14 15:29:33 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPF_H
#define PPF_H
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

#define GREEN "\033[48;2;0;50;0m" "\033[38;2;0;0;0m"
#define FECHA "\033[0m"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& value);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& value);
    ~PresidentialPardonForm();

    PresidentialPardonForm(std::string target);
    void    execute(Bureaucrat const &executor) const;
};

#endif