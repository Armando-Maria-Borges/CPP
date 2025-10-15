/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:38:41 by aborges           #+#    #+#             */
/*   Updated: 2025/08/15 12:40:47 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("Form_Presdente", false, 25, 5)
{
    std::cout << GREEN << "Default construct PresidentialPardonForm called" << FECHA << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &value) 
    : target(value.target) 
{
    std::cout << GREEN << "Copy construct PresidentialPardonForm called" << FECHA << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &value)
{
    std::cout << GREEN << "Copy asigment construct PresidentialPardonForm called" << FECHA << std::endl;
    if (this != &value)
        this->target = value.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << GREEN << "Destruct PresidentialPardonForm called" << FECHA << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("Form_Presdente", 25, 5, false), target(target)
{}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getAssin())
    {
        std::cout << this->getName() << " Não assinado \n";
        return ;
    }
    else if (!(executor.getGrade() <= this->getexecuGrade()))
    {
        throw GradeTooLowException();
    }
    std::cout << target << " ..foi perdoado por Zaphod Beeblebrox\n";
}