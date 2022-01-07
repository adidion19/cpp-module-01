/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:16:57 by adidion           #+#    #+#             */
/*   Updated: 2022/01/06 13:17:00 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
	typedef void(Karen::*fct)(void);
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen();
	~Karen();
	void complain( std::string level );
};

#endif