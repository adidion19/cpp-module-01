/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:30:04 by adidion           #+#    #+#             */
/*   Updated: 2022/01/06 12:02:03 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen karen;

	karen.complain("Random message");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	karen.complain("debug");
	karen.complain("message");
}
