/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:26:08 by youkhart          #+#    #+#             */
/*   Updated: 2021/07/06 16:26:10 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__
# include <string>  

class Weapon
{
    private:
        std::string         type;

    public:
        Weapon(void);
        Weapon(std::string type);

        void                setType(std::string t);
        const std::string   &getType(void);
};
#endif
