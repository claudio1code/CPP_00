#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int total_contact;
		int index;
		std::string getValidInput(const std::string& prompt) const;
		std::string formatedField(std::string text) const;
		bool isNumber(std::string text) const;
		int convertNumber(std::string nbr) const;

	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void searchContact() const;
};
#endif