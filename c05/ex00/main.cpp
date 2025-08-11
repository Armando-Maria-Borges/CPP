/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:20:52 by aborges           #+#    #+#             */
/*   Updated: 2025/08/04 13:05:16 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    int grade = 1;
    Bureaucrat obj(2);
    std::cout << obj << std::endl;
    while (grade)
    {
        std::clog << "\n**1 (nota mais alta possível) a 150 (nota mais baixa possível)";
        std::clog << "\n**CHOOSE DE OPTION: 1(--) AND 2(++)\n_";
        std::cin>>grade;

        if (grade == 1)
        {
            obj.setDecrementGrade();
            std::cout << obj << std::endl;
        }
        else if (grade == 2)
        {
            obj.setIncrementGrade();
            std::cout << obj << "\n";
        }
        else
            return (0);
    }
    return (0);
}