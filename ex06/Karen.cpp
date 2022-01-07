/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:16:26 by adidion           #+#    #+#             */
/*   Updated: 2022/01/06 13:32:12 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return ;
}

Karen::~Karen()
{
	return ;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::complain(std::string level)
{
	void (Karen::*fct[4])(void) = {
	&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = -1;
	int j;
	while (++i < 4)
	{
		if (lvl[i] == level)
		{
			(this->*(fct[i]))();
			j = i;
			break ;
		}
	}
	switch (j)
	{
		case 1:
			while (++i < 4)
				(this->*(fct[i]))();
			break;
		case 2:
			while (++i < 4)
				(this->*(fct[i]))();
			break;
		case 3:
			(this->*(fct[++i]))();
			break;
		case 4:
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
			break;
	}
}