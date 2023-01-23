/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aainhaja <aainhaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:22:10 by aainhaja          #+#    #+#             */
/*   Updated: 2023/01/24 00:02:17 by aainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout <<"Default Constructor Called"<< std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}
Zombie::~Zombie()
{
    std::cout << "Destructor Called" << std::endl;
}
void Zombie::set(std::string s)
{
    name = s;
}
std::string Zombie::get_name() {return this->name;}
void Zombie::set_name(std::string namee) {this->name = namee;}
void Zombie::announce( void )
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void randomChump(std::string name)
{
    Zombie p(name);
    p.announce();
}

Zombie* newZombie( std::string name )
{
    Zombie *p;
    p = new Zombie(name);
    return(p);
}