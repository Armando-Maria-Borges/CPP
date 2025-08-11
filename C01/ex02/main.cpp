/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:49:13 by aborges           #+#    #+#             */
/*   Updated: 2025/07/09 16:38:49 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string *stringPTR = &name;
    std::string& stringREF = name;

    std::cout << "ENDEREÇOS:" << std::endl;
    std::cout << "O endereço de memória da variável string   : " << &name << std::endl;
    std::cout << "O endereço de memória mantido por stringPTR: " << &stringPTR << std::endl;
    std::cout << "O endereço de memória mantido por stringREF: " << &stringREF << std::endl;
    
    std::cout << "VALORES:" << std::endl;
    std::cout << "O valor da variável string    : " << name << std::endl;
    std::cout << "O valor apontado por stringPTR: " << *stringPTR << std::endl;
    std::cout << "O valor apontado por stringREF: " << stringREF << std::endl;
    return (0);
}