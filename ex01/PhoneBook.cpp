/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:56:18 by clados-s          #+#    #+#             */
/*   Updated: 2026/02/25 17:34:05 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(){
	total_contact = 0;
	index = 0;
}

void PhoneBook::addContact(){
	std::string input;
	std::cout << "Digite o primeiro nome: ";
	std::getline(std::cin, input);
	contacts[index].setFirstName(input);
	input.clear();

	std::cout << "Digite o sobrenome: ";
	std::getline(std::cin, input);
	contacts[index].setLastName(input);
	
	std::cout << "Digite o nickname: ";
	std::getline(std::cin, input);
	contacts[index].setNickName(input);

	std::cout << "Digite o número de telefone: ";
	std::getline(std::cin, input);
	contacts[index].setPhoneNumber(input);
	
	std::cout << "Digite seu segredo obscuro: ";
	std::getline(std::cin, input);
	contacts[index].setObscureSecret(input);
}