/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:12:32 by aborges           #+#    #+#             */
/*   Updated: 2025/07/17 12:23:16 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& valor);
    Animal& operator=(const Animal& valor);
    virtual ~Animal();

    Animal(std::string type);
    virtual void makeSound() const;
    virtual std::string getType() const;
};

#endif