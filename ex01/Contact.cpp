/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:56:11 by clados-s          #+#    #+#             */
/*   Updated: 2026/02/25 16:30:17 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string& f_name){
	first_name = f_name;
}

void Contact::setLastName(const std::string& l_name){
	last_name = l_name;
}

void Contact::setNickName(const std::string& n_name){
	nick_name = n_name;
}

void Contact::setObscureSecret(const std::string& o_secrete){
	obscure_secret = o_secrete;
}

void Contact::setPhoneNumber(const std::string& p_number){
	phone_number = p_number;
}

std::string Contact::getFirstName() const {
	return first_name;
}

std::string Contact::getLastName() const {
	return last_name;
}

std::string Contact::getNickName() const {
	return nick_name;
}

std::string Contact::getObscureSecret() const {
	return obscure_secret;
}

std::string Contact::getPhoneNumber() const{
	return phone_number;
}