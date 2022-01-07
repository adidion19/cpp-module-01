/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:17:22 by adidion           #+#    #+#             */
/*   Updated: 2022/01/03 14:43:58 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

void randomChump( std::string name )
{
	Zombie newZombie;
	newZombie.name(name);
	newZombie.announce();
	return ;
}