/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:37:52 by aborges           #+#    #+#             */
/*   Updated: 2025/08/15 12:52:14 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("Form_Robot", false, 72, 45)
{
    std::cout << GREEN << "Default construct RobotomyRequestForm called" << FECHA << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &value)
{
    std::cout << GREEN << "Copy construct RobotomyRequestForm called" << FECHA << std::endl;
    *this = value;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &value)
{
    std::cout << GREEN << "Copy asigment construct RobotomyRequestForm called" << FECHA << std::endl;
    if (this != &value)
        this->target = value.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << GREEN << "Destruct RobotomyRequestForm called" << FECHA << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("Form_Robot", 72, 45, false), target(target)
{}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    try
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
    
        std::cout << target << " nguirrrrrrrrr\n";
        std::cout << target << " Foi robotizado com sucesso em "
                  << std::rand() % 100 << "%" << " das vezes\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}