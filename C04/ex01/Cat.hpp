/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:19:32 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:43:30 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* br;
public:
    Cat();
    Cat(const Cat& valor);
    Cat& operator=(const Cat& valor);
    ~Cat();

    void makeSound() const;
};

#endif
