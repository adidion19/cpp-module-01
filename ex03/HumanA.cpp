/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:25:12 by adidion           #+#    #+#             */
/*   Updated: 2022/01/04 11:26:10 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : name(str), gun(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack() const
{
	std::cout << name << " attacks with his " << gun.getType() << std::endl;
}