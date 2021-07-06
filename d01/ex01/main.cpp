/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkhart <youkhart@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:24:02 by youkhart          #+#    #+#             */
/*   Updated: 2021/07/06 16:24:03 by youkhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int N = 4;

    Zombie * horde = zombieHorde(N, "HORDE ZOMBIE");

    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }

    delete[] (horde);

    return (0);
}
