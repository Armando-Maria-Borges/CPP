/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:22:33 by aborges           #+#    #+#             */
/*   Updated: 2025/08/04 13:56:50 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Form"), assin(false), assinGrade(0), execuGrade(0)
{
    //std::cout << "Default construct Form called" << std::endl;
}

Form::Form(std::string name, bool assin, int assinGrade, int execuGrade) : name(name), assin(assin), assinGrade(assinGrade), execuGrade(execuGrade)
{
    try
    {
        if (assinGrade < MIN)
            throw Form::GradeTooHighException();
        else if (assinGrade > MAX)
            throw Form::GradeTooLowException();
        if (execuGrade < MIN)
            throw Form::GradeTooHighException();
        else if (execuGrade > MAX)
            throw Form::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Form::Form(const Form& value) : name(value.name), assin(value.assin), assinGrade(value.assinGrade), execuGrade(value.execuGrade)
{
    //std::cout << "Copy construct Form called" << std::endl;
}

Form& Form::operator=(const Form& value)
{
    std::cout << "Copy asigment construct Form called" << std::endl;
    if (this != &value)
        this->assin = value.assin;
    return (*this);
}

Form::~Form()
{
    //std::cout << "Destruct Form called" << std::endl;
}

bool Form::beSigned(Bureaucrat bur)
{
    try
    {
        if (this->assinGrade >= bur.getGrade())
        {
            this->assin = true;
            return (true);
        }
        else
            throw Form::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (false);
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getAssin() const
{
    return (this->assin);
}

int Form::getassinGrade() const
{
    return (this->assinGrade);
}

int Form::getexecuGrade() const
{
    return (this->assinGrade);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("nota muito alta para Form");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("nota muito baixa para Form");
}
std::ostream& operator<<(std::ostream& out, const Form& obj)
{
    out << obj.getName() << " " << obj.getAssin() << " " << obj.getassinGrade() 
    << " " << obj.getexecuGrade();
    return out;
}