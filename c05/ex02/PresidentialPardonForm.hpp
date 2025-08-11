/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:38:17 by aborges           #+#    #+#             */
/*   Updated: 2025/08/08 10:33:43 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRF_H
#define RRF_H
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& value);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& value);
    ~PresidentialPardonForm();

    PresidentialPardonForm(std::string target);
    void    PresidentialPardonForm::execute(Bureaucrat const &executor) const;
};

#endif