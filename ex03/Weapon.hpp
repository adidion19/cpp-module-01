/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:30:56 by adidion           #+#    #+#             */
/*   Updated: 2022/01/04 11:27:43 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string str);
		~Weapon();
		std::string type;
		const std::string & getType() const;
		void setType(const std::string &str);
};

#endif