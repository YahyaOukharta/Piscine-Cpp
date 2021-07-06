/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:25:12 by youkhart          #+#    #+#             */
/*   Updated: 2021/07/06 16:25:21 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    this->setType("");
}

Weapon::Weapon(std::string t)
{
    this->setType(t);
}

void                Weapon::setType(std::string t)
{
    this->type = t;
}

const std::string   &Weapon::getType(void)
{
    return (this->type);
}
