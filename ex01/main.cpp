/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:56:06 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/02 10:54:02 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	PhoneBook agenda;
	std::string command;

	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if(std::cin.eof()){
			std::cout << std::endl;
			break;
		}
		if (command == "ADD")
			agenda.addContact();
		else if (command == "SEARCH")
			agenda.searchContact();
		else if (command == "EXIT")
		break;
	}
}
