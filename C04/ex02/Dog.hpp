/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:18:26 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:58:32 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* br;
public:
    Dog();
    Dog(const Dog& valor);
    Dog& operator=(const Dog& valor);
    ~Dog();

    void makeSound() const;
};

#endif
