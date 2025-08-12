/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:51:39 by aborges           #+#    #+#             */
/*   Updated: 2025/06/12 14:51:36 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "harlFilter.hpp"

int main(int argc, char **argv)
{
    Harl    obj;

    if (argc != 2)
    {
        std::cout << "Execute: ./harlFilter nivel" << std::endl;
        return (1);
    }

    obj.complaint(argv[1]);
    return (0);
}