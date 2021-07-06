/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:23:31 by youkhart          #+#    #+#             */
/*   Updated: 2021/07/06 16:23:32 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->setName(name);
}

Zombie::Zombie(void)
{
    
}

Zombie::~Zombie()
{
    std::cout << "RIP Zombie '" << this->name << "'" << std::endl;
}

std::string Zombie::getName(void)
{
    return (this->name);
}

void        Zombie::setName(std::string n)
{
    this->name = n;
}

void        Zombie::announce(void)
{
    std::cout << "<" << this->name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}
