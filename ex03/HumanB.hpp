/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:31:06 by adidion           #+#    #+#             */
/*   Updated: 2022/01/04 11:28:15 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
public:
	HumanB(std::string str);
	Weapon *gun;
	std::string name;
	void	attack() const;
	void	setWeapon(Weapon &weapon);
	~HumanB();
};

#endif