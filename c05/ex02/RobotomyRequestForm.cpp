/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:37:52 by aborges           #+#    #+#             */
/*   Updated: 2025/08/08 10:33:37 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("Form2", false, 72, 45)
{
    //std::cout << "Default construct ShrubberyCreationForm called" << std::endl;
}

// RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &value) : assinGrade(value.assinGrade), execuGrade(value.execuGrade)
// {
//     //std::cout << "Copy construct RobotomyRequestForm called" << std::endl;
// }

// RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &value)
// {
//     // //std::cout << "Copy asigment construct RobotomyRequestForm called" << std::endl;
//     // if (this != &value)
//     //     //this->grade = value.grade; **************
//     // return (*this);
// }

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "Destruct Bureaucrat called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    if (this->getAssin())
    {
        std::cout << target << " nguirrrrrrrrr\n";
        std::cout << target << " Foi robotizado com sucesso em 50% das vezes\n";
    }
    else
    {
        std::cout << "a robotomia falhou\n";
    }
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
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