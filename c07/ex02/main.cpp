/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:15:10 by aborges           #+#    #+#             */
/*   Updated: 2025/10/27 16:04:26 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    int * a = new int();
    std::cout << *a << "\n\n";

    try
    {
        Array<int> vect(2);
        vect[0] = 10;
        vect[1] = 20;

        Array<int> vect1 = vect;
        Array<int> other;
        other = vect1;

        vect1[0] = 11;
        vect1[1] = 22;

        for (int i = 0; i < vect.size(); i++)
            std::cout << vect[i] << "\n";

        //Construtor de cópia
        std::cout << "\nCOPIA\n";
        for (int i = 0; i < vect1.size(); i++)
            std::cout << vect1[i] << "\n";

        //Operador de atribuicao
        std::cout << "ATRIBUIÇÃO\n";
        for (int i = 0; i < other.size(); i++)
            std::cout << other[i] << "\n";
            
        std::cout << "\n";
        Array<std::string> vect2(3);
        vect2[0] = "Armando";
        vect2[1] = "Frnacisco";
        vect2[2] = "Borges";
        for (int i = 0; i < vect2.size(); i++)
            std::cout << vect2[i] << " ";
        std::cout << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete a;    
    return (0);
}