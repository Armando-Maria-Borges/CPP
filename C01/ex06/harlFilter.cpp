/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:51:20 by aborges           #+#    #+#             */
/*   Updated: 2025/06/12 14:52:47 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harlFilter.hpp"

Harl::Harl(){}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my" <<
        "7XL-double-cheese-triple-pickle-specialketchup burger." <<
        "I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money."
        << "You didn’t put enough bacon in my burger! If you did,"
        << "I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free."
        << "I’ve been coming for years, whereas you started working" 
        <<"here just last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complaint(std::string level)
{
    void (Harl::*ptr1[5])(void);

    ptr1[0] = &Harl::debug;
    ptr1[1] = &Harl::info;
    ptr1[2] = &Harl::warning;
    ptr1[3] = &Harl::error;

    const char *value[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    while (value[i])
    {
        if (value[i] == level)
        {
            while (i <= 3)
            {
                (this->*ptr1[i])();
                std::cout << std::endl;
                i++;
            }
            break;
        }
        i++;
    }
}

Harl::~Harl(){}