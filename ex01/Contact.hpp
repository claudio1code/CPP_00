#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {

	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string obscure_secret;

	public:
		void setFirstName(const std::string& f_name);
		void setLastName(const std::string& l_name); 
		void setNickName(const std::string& n_name);
		void setPhoneNumber(const std::string& p_number);
		void setObscureSecret(const std::string& o_secret); 
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getObscureSecret() const;
};
#endif