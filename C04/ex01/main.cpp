/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:27:25 by aborges           #+#    #+#             */
/*   Updated: 2025/07/22 13:48:47 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

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
    }
    {
        std::cout << "\n\nTHE OTHER TEST WRONG" << std::endl;
        
        const WrongAnimal* valor = new WrongAnimal();
        const WrongAnimal* cat;
        cat = new WrongCat();

        std::cout << "WrongAnimal: " << valor->getType() << " " << std::endl;
        valor->makeSound();
        std::cout << "WrongCat: " << cat->getType() << std::endl;
        cat->makeSound();

        delete valor;
        delete cat;
    }
    {
        std::cout << "\n\nTHE OTHER TEST" << std::endl;

        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;

        int size = 4;
        Animal* animals[size];

        for (int i = 0; i < (size / 2); i++)
            animals[i] = new Dog();
        for (int i = (size / 2); i < size; i++)
            animals[i] = new Cat();

        std::cout << "\n--- DELET ANIMAL ---\n";
        for (int i = 0; i < size; i++)
            delete animals[i];
    }
    return (0);
}