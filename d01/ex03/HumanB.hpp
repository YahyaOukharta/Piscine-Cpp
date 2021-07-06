/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:25:57 by youkhart          #+#    #+#             */
/*   Updated: 2021/07/06 16:25:59 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B__
# define __HUMAN_B__
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    private :
        Weapon      *weapon;
        std::string name;

    public :
        HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);

        void        setName(std::string n);
        std::string getName(void);

        void        attack(void);
        void        setWeapon(Weapon &w);
};

#endif
