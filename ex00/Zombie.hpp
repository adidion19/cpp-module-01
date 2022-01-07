/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:52:14 by adidion           #+#    #+#             */
/*   Updated: 2022/01/03 14:41:04 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void) const;
		void name(std::string n)
		{
			_name = n;
		}
};

#endif
