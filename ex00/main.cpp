/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:07:52 by adidion           #+#    #+#             */
/*   Updated: 2022/01/03 14:49:14 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void)
{
	Zombie* Zombie[2];
	Zombie[0] = newZombie("Moulinette");
	randomChump("Toto");
	Zombie[1] = newZombie("cppZombie");
	delete Zombie[0];
	randomChump("19");
	randomChump("42");
	delete Zombie[1];
}
