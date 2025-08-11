/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:20:52 by aborges           #+#    #+#             */
/*   Updated: 2025/08/04 15:38:59 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    int grade = 1;


    Bureaucrat bur("ARMANDO", 2);
    Form       form("PROVA", true, 1, 1);

    //form.beSigned(bur);
    std::cout << bur << std::endl;
    bur.signForm(form, bur);
    while (grade)
    {
        std::clog << "\n**1 (nota mais alta possível) a 150 (nota mais baixa possível)";
        std::clog << "\n**CHOOSE DE OPTION: 1(--) AND 2(++)\n_";
        std::cin>>grade;

        if (grade == 1)
        {
            bur.setDecrementGrade();
            std::cout << bur << std::endl;
            bur.signForm(form, bur);
        }
        else if (grade == 2)
        {
            bur.setIncrementGrade();
            std::cout << bur << std::endl;
            bur.signForm(form, bur);
        }
        else
            return (0);
    }
    return (0);
}