
#include <iostream>
#include "Zombie.hpp"

int main()
{
    int qt;
    std::cout << "INSIRA A QUANTIDADE DE ZOMBIE: ";
    std::cin >> qt;

    if (qt < 1 || !qt)
    {
        std::cout << "Quantidade inválida" << std::endl;
        return (1);
    }
    Zombie *zom = zombieHorde(qt, "Armando Borges");
    for (int i = 0; i < qt; i++)
        zom[i].announce();
    delete [] zom;
    return (0);
}