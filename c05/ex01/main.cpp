/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:20:52 by aborges           #+#    #+#             */
/*   Updated: 2025/08/15 12:31:26 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    int grade = 1;

    Bureaucrat bur("ARMANDO", 2);
    Form       form("PROVA", 2, 1);

    std::cout << bur << std::endl;
    bur.signForm(form);
    while (grade)
    {
        std::clog << GREEN << "\n**1 (nota mais alta possível) a 150 (nota mais baixa possível)" << FECHA;
        std::clog << "\n**CHOOSE DE OPTION: 1(--) AND 2(++)\n_";
        std::cin>>grade;

        if (grade == 1)
        {
            bur.setDecrementGrade();
            std::cout << bur << std::endl;
            //bur.signForm(form);
        }
        else if (grade == 2)
        {
            bur.setIncrementGrade();
            std::cout << bur << std::endl;
            //bur.signForm(form);
        }
        else
            return (0);
    }
    return (0);
}