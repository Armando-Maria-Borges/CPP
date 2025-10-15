/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:20:09 by aborges           #+#    #+#             */
/*   Updated: 2025/08/14 15:19:18 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("aborges")
{
    std::cout << GREEN << "Default construct Bureaucrat called" << FECHA << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &value) : name(value.name), grade(value.grade)
{
    std::cout << GREEN << "Copy construct Bureaucrat called" << FECHA << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &value)
{
    std::cout << GREEN << "Copy asigment construct Bureaucrat called" << FECHA << std::endl;
    if (this != &value)
        this->grade = value.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << GREEN << "Destruct Bureaucrat called" << FECHA << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    try
    {
        if (grade < MIN)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > MAX)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::setIncrementGrade()
{
    try
    {
        if (grade - 1 < MIN)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > MAX)
            throw Bureaucrat::GradeTooLowException();
        this->grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::setDecrementGrade()
{
    try
    {
        if (grade + 1 > MAX)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < MIN)
            throw Bureaucrat::GradeTooHighException();
        this->grade++;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::signForm(Form form) const
{
    try
    {
        if (this->grade < MIN)
            throw Bureaucrat::GradeTooHighException();
        else if (this->grade > MAX)
            throw Bureaucrat::GradeTooLowException();

        if (form.beSigned(*this) != true)
        {
            throw GradeTooLowException();
        }
        if (form.beSigned(*this))
            std::cout << "burocrata " << name << " assina a/o " << form.getName() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << "burocrata " << name << " não conseguiu assinar " << form.getName()
            << " devido a nota exigida\n";
        std::cout << "Nota para assinar: >= " << form.getassinGrade() << " \n";
        std::cerr << e.what() << "\n";
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("nota muito alta");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("nota muito baixa");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
    out << "\n" << obj.getName() << " bureaucrat " << obj.getGrade();
    return out;
}