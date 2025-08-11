/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:51:39 by aborges           #+#    #+#             */
/*   Updated: 2025/06/12 14:09:40 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main()
{
    Harl    obj;

    obj.complaint("DEBUG");
    std::cout << std::endl;
    obj.complaint("INFO");
    std::cout << std::endl;
    obj.complaint("WARNING");
    std::cout << std::endl;
    obj.complaint("ERROR");
    return (0);
}