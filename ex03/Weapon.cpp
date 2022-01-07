/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:27:49 by adidion           #+#    #+#             */
/*   Updated: 2022/01/04 11:27:58 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->type = str;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string const & Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(const std::string &str)
{
	this->type = str;
	return ;
}