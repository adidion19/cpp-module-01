/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:24:55 by adidion           #+#    #+#             */
/*   Updated: 2022/01/06 13:31:25 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Program use: ./ex06 <arg>" << std::endl;
		return (1);
	}
	Karen karen;
	karen.complain(av[1]);
	return (0);
}