/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:41:56 by aborges           #+#    #+#             */
/*   Updated: 2025/06/12 10:42:04 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private:
    std::string name;
    public:
    Zombie();
    void    setName(std::string name);
    void announce( void );
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );