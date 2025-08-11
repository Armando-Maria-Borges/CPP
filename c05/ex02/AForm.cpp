/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:22:33 by aborges           #+#    #+#             */
/*   Updated: 2025/08/08 11:02:40 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("AForm"), assin(false), assinGrade(0), execuGrade(0)
{
    //std::cout << "Default construct AForm called" << std::endl;
}

AForm::AForm(std::string name, bool assin, int assinGrade, int execuGrade) : name(name), assin(assin), assinGrade(assinGrade), execuGrade(execuGrade)
{
    try
    {
        if (assinGrade < MIN)
            throw AForm::GradeTooHighException();
        else if (assinGrade > MAX)
            throw AForm::GradeTooLowException();
        if (execuGrade < MIN)
            throw AForm::GradeTooHighException();
        else if (execuGrade > MAX)
            throw AForm::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

AForm::AForm(const AForm& value) : name(value.name), assin(value.assin), assinGrade(value.assinGrade), execuGrade(value.execuGrade)
{
    //std::cout << "Copy construct AForm called" << std::endl;
}

AForm& AForm::operator=(const AForm& value)
{
    std::cout << "Copy asigment construct AForm called" << std::endl;
    if (this != &value)
        this->assin = value.assin;
    return (*this);
}

AForm::~AForm()
{
    //std::cout << "Destruct AForm called" << std::endl;
}

bool AForm::beSigned(Bureaucrat bur)
{
    try
    {
        if (this->assinGrade >= bur.getGrade())
        {
            this->assin = true;
            return (true);
        }
        else
            throw AForm::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (false);
}

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getAssin() const
{
    return (this->assin);
}

int AForm::getassinGrade() const
{
    return (this->assinGrade);
}

int AForm::getexecuGrade() const
{
    return (this->assinGrade);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("nota muito alta para AForm");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("nota muito baixa para AForm");
}
std::ostream& operator<<(std::ostream& out, const AForm& obj)
{
    out << obj.getName() << " " << obj.getAssin() << " " << obj.getassinGrade() 
    << " " << obj.getexecuGrade();
    return out;
}