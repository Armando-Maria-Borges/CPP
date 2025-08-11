/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:07:02 by aborges           #+#    #+#             */
/*   Updated: 2025/08/08 10:33:20 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Form1", false, 145, 137)
{
    //std::cout << "Default construct ShrubberyCreationForm called" << std::endl;
}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &value)// : assinGrade(value.assinGrade), execuGrade(value.execuGrade)
// {
//     //std::cout << "Copy construct ShrubberyCreationForm called" << std::endl;
// }

// ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &value)
// {
//     //std::cout << "Copy asigment construct ShrubberyCreationForm called" << std::endl;
//     if (this != &value)
//         //this->grade = value.grade; **************
//     return (*this);
// }

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "Destruct Bureaucrat called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, bool assin, const int assinGrade, const int execuGrade)
    : AForm(name, false, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    std::ofstream   arquivo;
    std::string     name_arq;

    try
    {
        name_arq = target + "_shrubbery";
        arquivo.open(name_arq.c_str());
        if (arquivo.is_open())
        {
            arquivo << "Criando a árvore ascii\n\n\n";
            arquivo << "    ^\n";
            arquivo << "   /|\\\n";
            arquivo << "  /_|_\\\n";
            arquivo << "  |_|_\\n";
            arquivo << " /_____\\\n";
            arquivo << "/_______\\\n";
        }
        else
        {
            arquivo.close();
            throw std::exception();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    arquivo.close();
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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