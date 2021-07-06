/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:25:47 by youkhart          #+#    #+#             */
/*   Updated: 2021/07/06 16:25:49 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A__
# define __HUMAN_A__
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
    private :
        Weapon      &weapon;
        std::string name;

    public :
        HumanA(Weapon &weapon);
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);

        void        setName(std::string n);
        std::string getName(void);

        void        attack(void);
        void        setWeapon(Weapon &w);
};

#endif
