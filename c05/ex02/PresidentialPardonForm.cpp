/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:38:41 by aborges           #+#    #+#             */
/*   Updated: 2025/08/08 10:33:53 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("Form3", false, 25, 5)
{
    //std::cout << "Default construct ShrubberyCreationForm called" << std::endl;
}

// PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &value) : assinGrade(value.assinGrade), execuGrade(value.execuGrade)
// {
//     //std::cout << "Copy construct PresidentialPardonForm called" << std::endl;
// }

// PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &value)
// {
//     //std::cout << "Copy asigment construct PresidentialPardonForm called" << std::endl;
//     if (this != &value)
//         //this->grade = value.grade; **************
//     return (*this);
// }

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "Destruct Bureaucrat called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    std::cout << target << " foi perdoado por Zaphod Beeblebrox\n";
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (this->getAssin() && executor.getGrade() < this->getexecuGrade())
        {
            std::cout << this->getName() << " Executado com sucesso\n";
        }
        else
        {
            throw GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}