/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:07:02 by aborges           #+#    #+#             */
/*   Updated: 2025/08/15 12:42:27 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("Form_Shurbbery", 145, 137, false)
{
    std::cout << GREEN << "Default construct ShrubberyCreationForm called" << FECHA << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &value) 
    : target(value.target)
{
    std::cout << GREEN << "Copy construct ShrubberyCreationForm called" << FECHA << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &value)
{
    std::cout << GREEN << "Copy asigment construct ShrubberyCreationForm called" << FECHA << std::endl;
    if (this != &value)
        this->target = value.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << GREEN << "Destruct ShrubberyCreationForm called" << FECHA << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) 
    : AForm(target, 145, 137, false), target(target)
{}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream   arquivo;
    std::string     name_arq;

        if (!this->getAssin())
        {
            return ;
        }
        else if (!(executor.getGrade() <= this->getexecuGrade()))
        {
            throw GradeTooLowException();
        }
        
        name_arq = this->getName() + "_shrubbery";
        arquivo.open(name_arq.c_str());
        if (arquivo.is_open())
        {
            arquivo << "\n\n   árvore\n\n\n";
            arquivo << "                                aaaa\n";
            arquivo << "                           aaaaaaaaaaa\n";
            arquivo << "                    aaaaaaaaaaaaaaaaaaa\n";
            arquivo << "                aaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n";
            arquivo << "        aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n";
            arquivo << "                    aaaaaaaaaaaaaaaaaaa\n";
            arquivo << "            aaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n";
            arquivo << "    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n";
            arquivo << "                                aaaaaa\n";
            arquivo << "                                aaaaaa\n";
            arquivo << "                                aaaaaa\n";
            arquivo << "                                aaaaaa\n";
            arquivo << "                                aaaaaa\n";
            arquivo << "                                aaaaaa\n";
            arquivo << "\n\n\n";


            arquivo << "\n  Nova árvore\n\n\n";
            arquivo << "          ##\n";
            arquivo << "     ()()()()()()\n";
            arquivo << "()()()()()()()()()()()\n";
            arquivo << "   ()()()()()()()()\n";
            arquivo << "     ()()()()()()\n";
            arquivo << "      ()()()\n";
            arquivo << "  ()()-|  |-()()\n";
            arquivo << "       ()##()()\n";
            arquivo << "         ##\n";
            arquivo << "\n\n\n";

            arquivo << "\n      Nova árvore 2\n\n\n";
            arquivo << "                                   beeeee\n";
            arquivo << "                           bbaaaaaabbbbbb\n";
            arquivo << "                    bbbbaaabbbbbbbbbbbccccaa\n";
            arquivo << "                bbbbbbbaaaaaaaabbbbbbbbbbbbbbbb\n";
            arquivo << "        bbbbbbbbaaaaaaaaaaaaaaaaccccccccccccceeeeeee\n";
            arquivo << "                    bbbbaaabbbbbbbbbbbeeee\n";
            arquivo << "            bbbbbbbaaaaaaaaaaaaaccccccccccccccc\n";
            arquivo << "    bbbbbbbbbaaccccccccccccccccccddddddddeeeeeeeeeeeee\n";
            arquivo << "                                     baa\n";
            arquivo << "                                     baa\n";
            arquivo << "                                     baa\n";
            arquivo << "                                     baa\n";
            arquivo << "                                     baa\n";
            arquivo << "                                     baa\n";
            arquivo << "\n\n\n";
        }
        else
        {
            arquivo.close();
            throw std::exception();
        }
        std::cout << "Ficheiro com uma árvore criadao\n";
        arquivo.close();
}
