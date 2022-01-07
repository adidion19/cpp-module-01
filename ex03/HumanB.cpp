/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:24:33 by adidion           #+#    #+#             */
/*   Updated: 2022/01/04 11:24:59 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
	gun = &weapon;
}

HumanB::HumanB(std::string str)
{
	this->gun = NULL;
	name = str;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack() const
{
	if (this->gun)
	std::cout << name << " attacks with his " << (*(gun)).getType() << std::endl;
}