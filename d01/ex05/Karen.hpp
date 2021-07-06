/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:27:48 by youkhart          #+#    #+#             */
/*   Updated: 2021/07/06 16:28:05 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_HPP__
# define __KAREN_HPP__
# include <iostream>
# include <string>

typedef void (*func)(void);
class Karen
{
    private:
        func loglevels[4];
        std::string levels[4];

    public:
        Karen(void);
        void complain(std::string level);
        static void debug(void);
        static void info(void);
        static void warning(void);
        static void error(void);
};

#endif
