/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:27:42 by youkhart          #+#    #+#             */
/*   Updated: 2021/07/06 16:27:43 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    Karen k;

    k.complain("debug");
    k.complain("info");
    k.complain("warning");
    k.complain("error");

    k.complain("sldkfjs");

    return (0);
}
