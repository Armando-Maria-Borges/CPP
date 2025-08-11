/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:56:09 by aborges           #+#    #+#             */
/*   Updated: 2025/07/11 10:06:33 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    show()
{
    std::cout << std::endl;
    std::cout << "****INSER THE OPTION****" << std::endl;
    std::cout << "1. ATTACK ** 2. RECOVERY ** 3. EXIT" << std::endl;
    std::cout << "* ";
}

int main()
{
    int op;
    std::string pessoa_atak = "Armando";
    std::string pessoa_alvo = "Borges";

    ClapTrap clap(pessoa_atak);
    ClapTrap alvo(clap);

    clap.mostrar();
    alvo.mostrar();

    do
    {
        show();
        std::cin >> op;
        std::cout << std::endl;

        switch (op)
        {
            case 1:
                clap.attack(pessoa_alvo);
                alvo.takeDamage(clap.getDanoAttak());
            break;
            case 2:
                alvo.beRepaired(1);
            break;
            case 3:
                std::cout << "EXIT!" << std::endl;
                return (0);
            break;
            default:
                op = -1;
                std::cout << "INVALID OPTION!" << std::endl;
            break;
        }
        clap.mostrar();
        alvo.mostrar();
    }
    while (op > 0);
    return (0);
}