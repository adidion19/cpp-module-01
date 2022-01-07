/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:44:20 by adidion           #+#    #+#             */
/*   Updated: 2022/01/03 17:27:17 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String address: " << &str << std::endl;
	std::cout << "String address using StringPTR: " << stringPTR << std::endl;
	std::cout << "String address using StringREF: " << &stringREF << std::endl;
	std::cout << "String using StringPTR: " << *stringPTR << std::endl;
	std::cout << "String using StringREF: " << stringREF << std::endl;
}