/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:12:33 by adidion           #+#    #+#             */
/*   Updated: 2022/01/04 11:25:09 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
public:
	HumanA(std::string str, Weapon &weapon);
	Weapon &gun;
	std::string name;
	void	attack() const;
	~HumanA();
};

#endif
