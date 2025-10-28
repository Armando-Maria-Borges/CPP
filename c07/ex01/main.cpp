/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:48:41 by aborges           #+#    #+#             */
/*   Updated: 2025/10/27 15:35:02 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void) 
{
    std::cout << "Teste para int\n";
    int const array_int[] = {1, -2 , 3};
    ::iter(array_int, 3, show<int>);
    ::iter(array_int, 3, negative<int>);

    std::cout << "\nTeste para float\n";
    float array_float[] = {-1.1, 2.2 , 3.3};
    ::iter(array_float, 3, show<float>);
    ::iter(array_float, 3, negative<float>);

    std::cout << "\nTeste para string\n";
    std::string array_string[] = {"Armando", "Francisco", "Borges"};
    ::iter(array_string, 3, show<std::string>);
    ::iter(array_string, 3, len<std::string>);
    return (0);
}