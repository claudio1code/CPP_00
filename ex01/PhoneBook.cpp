/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:56:18 by clados-s          #+#    #+#             */
/*   Updated: 2026/02/27 15:49:17 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cctype>

PhoneBook::PhoneBook(){
	total_contact = 0;
	index = 0;
}

PhoneBook::~PhoneBook(){
}

std::string PhoneBook::getValidInput(const std::string& prompt) const{
	std::string input;
	std::cout << prompt;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "O campo não pode ser vazio\n";
		std::getline(std::cin, input);
	}
	return input;
}

std::string PhoneBook::formatedField(std::string text) const{
	if (text.length() > 9)
		return text.substr(0, 9) + ".";
	return text;
}

bool PhoneBook::isNumber(std::string text) const{
	for (size_t i = 0; i < text.length(); i++)
	{
		if (!(std::isdigit(text[i])))
			return false;
	}
	return true;
}

int PhoneBook::convertNumber(std::string nbr) const{
	return std::atoi(nbr.c_str());
}

void PhoneBook::addContact(){
	contacts[index].setFirstName(getValidInput("Digite o primeiro nome: "));
	contacts[index].setLastName(getValidInput("Digite o sobrenome: "));
	contacts[index].setNickName(getValidInput("Digite o nickname: "));
	contacts[index].setPhoneNumber(getValidInput("Digite o número de telefone: "));
	contacts[index].setObscureSecret(getValidInput("Digite o segredo obscuro: "));
	index++;
	if (index == 8)
		index = 0;
	if (total_contact < 8)
		total_contact++;
}

void PhoneBook::searchContact() const{
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < total_contact; i++){
		
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << formatedField(contacts[i].getFirstName()) << "|"
				  << std::setw(10) << formatedField(contacts[i].getLastName()) << "|"
				  << std::setw(10) << formatedField(contacts[i].getNickName()) << std::endl;
	}
	
	std::string input = getValidInput("Digite o index para expandir: ");
	if (!PhoneBook::isNumber(input))
	{
		std::cout << "Erro: o index deve ser um número!" << std::endl;
		return;
	}
	int idx = convertNumber(input);
	if (idx < 0 || idx > total_contact){
		std::cout << "Erro: index fora dos limites ou contato inexistente!" << std::endl;
		return;
	}
	std::cout << "\n--- Detlhes do Contato ---" << std::endl;
	
	
} 