/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:06:57 by adidion           #+#    #+#             */
/*   Updated: 2022/01/04 17:26:25 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4 || (ac == 4 && (av[2][0] == '\0' || av[3][0] == '\0' || av[1][0] == '\0'))){
		std::cout << "Use of the program: <file> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string file = av[1];
	std::ifstream ifs(av[1]);
	std::string s1 = av[2], s2 = av[3];
	if (!ifs)
	{
		std::cout << "The file doesn't exist" << std::endl;
		return (1);
	}
	ifs.seekg(0, ifs.end);
	int length = ifs.tellg();
	ifs.seekg(0, ifs.beg);
	char * buffer = new char [length];
	ifs.read(buffer, length);
	std::string buff = buffer;
	std::ofstream out (file += ".replace");
	size_t i;
	while ((i = buff.find(s1)) != std::string::npos)
	{
		buff.erase(i, s1.length());
		buff.insert(i, s2);
	}
	buff.front();
	out << buff;
	out.close();
	ifs.close();
	delete [] buffer;
}