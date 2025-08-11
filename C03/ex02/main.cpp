/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:56:09 by aborges           #+#    #+#             */
/*   Updated: 2025/07/14 12:58:24 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
    std::string pessoa_atak = "ARMANDO";
    std::string pessoa_scav = "FRANCISCO";
    std::string pessoa_frag = "BORGES";
  
    ClapTrap clap("ARMANDO");
    ScavTrap scav("FRANCISCO");
    FragTrap frag("BORGES");

    clap.mostrar();
    scav.mostrar();
    frag.mostrar();

    do
    {
        show();
        std::cin >> op;
        std::cout << std::endl;

        switch (op)
        {
            case 1:
                int op1;
                std::cout << "CHOOSE THE OPTION FOR ATTACK (1-CLAP, 2-SCAV, 3-FLAF)" << std::endl;
                std::cout << "* ";
                std::cin >> op1;
                if (op1 == 1)
                {
                    clap.attack(pessoa_atak);
                    scav.takeDamage(clap.getDanoAttak());
                    frag.takeDamage(clap.getDanoAttak());
                }
                else if (op1 == 2)
                {
                    scav.attack(pessoa_scav);
                    clap.takeDamage(scav.getDanoAttak());
                    frag.takeDamage(scav.getDanoAttak());
                }
                else if (op1 == 3)
                {
                    frag.attack(pessoa_frag);
                    clap.takeDamage(frag.getDanoAttak());
                    scav.takeDamage(frag.getDanoAttak());
                }
            break;
            case 2:
            
                int op2;
                std::cout << "CHOOSE THE OPTION FOR DAMAGE (1-CLAP, 2-SCAV, 3-FLAF)" << std::endl;
                std::cout << "* ";
                std::cin >> op2;

                if (op2 == 1)
                {
                    clap.beRepaired(1);
                }
                else if (op2 == 2)
                {
                    scav.guardGate();
                    scav.beRepaired(1);
                }
                else if (op2 == 3)
                {
                    frag.beRepaired(1);
                    frag.highFivesGuys();
                }
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
        scav.mostrar();
        frag.mostrar();
    }
    while (op > 0);
    return (0);
}