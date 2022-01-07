/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:59:50 by adidion           #+#    #+#             */
/*   Updated: 2022/01/03 17:47:54 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "This world is beautiful: Zombies don't exist" << std::endl;
		return (0);
	}
	Zombie* newZombie = new Zombie[N];
	while (--N >= 0)
	{
		newZombie[N].name(name);
		newZombie[N].announce();
	}
	return (&newZombie[0]);
}