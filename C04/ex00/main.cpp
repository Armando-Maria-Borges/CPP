/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:27:25 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:34:37 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
        //return 0;
    }
    {
        std::cout << std::endl << std::endl;
        std::cout << "THE OTHER TEST" << std::endl;
        
        const WrongAnimal* valor = new WrongAnimal();
        const WrongAnimal* cat;
        cat = new WrongCat();

        std::cout << "WrongAnimal: " << valor->getType() << " " << std::endl;
        valor->makeSound();
    
        std::cout << "WrongCat: " << cat->getType() << std::endl;
        cat->makeSound();

        delete valor;
        delete cat;
        //return 0;
    }
    return (0);
}