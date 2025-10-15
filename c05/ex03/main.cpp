/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:20:52 by aborges           #+#    #+#             */
/*   Updated: 2025/08/15 13:08:06 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    /*
    {
        int op = 1;

        Bureaucrat bur("ARMANDO", -4);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("Presidente");

        do
        {
            std::cout << "\n# - CHOOSE THE OPTION\n";
            std::cout << "1 - Criar árvore\n";
            std::cout << "2 - Robotizar\n";
            std::cout << "3 - Perdoar\n";
            std::cout << "4 - + \n";
            std::cout << "5 - - \n";
            std::cout << "0 - Exit\n";
            std::cout << "_: ";
            std::cin>>op;
            std::cout << "\n";
            
            if (op == 1)
            {
                bur.signForm(form1);
                bur.executeForm(form1);
            }
            else if (op == 2)
            {
                bur.signForm(form2);
                bur.executeForm(form2);
            }
            else if (op == 3)
            {
                bur.signForm(form3);
                bur.executeForm(form3);
            }
            else if (op == 4)
            {
                bur.setIncrementGrade();
                std::cout << bur;
            }
            else if (op == 5)
            {
                bur.setDecrementGrade();
                std::cout << bur;
            }
        }
        while (op != 0);
    }
    */
    
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        
        if (rrf)
        {
            Bureaucrat bur("ARMANDO", -2);
            rrf->beSigned(bur);
            rrf->execute(bur);
        }
        delete rrf;
    }
    return (0);
}