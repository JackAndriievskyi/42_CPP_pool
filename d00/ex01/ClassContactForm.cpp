// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassContactForm.cpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 10:18:18 by yandriie          #+#    #+#             //
//   Updated: 2018/10/01 13:39:06 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassContactForm.hpp"

int ContactForm::_printMod = FULL_INFO_MOD;

bool	ContactForm::empty(void) const {
	return (this->_firstName.empty() &&
			this->_lastName.empty() &&
			this->_nickName.empty() &&
			this->_login.empty() &&
			this->_postalAddress.empty() &&
			this->_phoneNumber.empty() &&
			this->_birthdayDate.empty() &&
			this->_favoriteMeal.empty() &&
			this->_underwearColor.empty() &&
			this->_darkestSecret.empty());
}

void	ContactForm::addContact(void) {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->_firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->_lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->_nickName);
	std::cout << "Enter login: ";
	std::getline(std::cin, this->_login);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, this->_postalAddress);
	std::cout << "Enter email address: ";
	std::getline(std::cin, this->_emailAddress);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->_phoneNumber);
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, this->_birthdayDate);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, this->_favoriteMeal);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, this->_underwearColor);
	std::cout << "Enter darkest secter: ";
	std::getline(std::cin, this->_darkestSecret);
}

void	ContactForm::printInfo(void) const {
	if (_printMod)
	{
		std::string tmp;

		tmp = this->_firstName;
		if (tmp.size() > FMT_SIZE)
		{
			tmp = tmp.erase(FMT_SIZE);
			tmp.push_back('.');
		}
		std::cout << '|';
		std::cout << std::setw(10) << std::right << tmp;
		tmp = this->_lastName;
		if (tmp.size() > FMT_SIZE)
		{
			tmp = tmp.erase(FMT_SIZE);
			tmp.push_back('.');
		}
		std::cout << '|';
		std::cout << std::setw(10) << std::right << tmp;
		tmp = this->_nickName;
		if (tmp.size() > FMT_SIZE)
		{
			tmp = tmp.erase(FMT_SIZE);
			tmp.push_back('.');
		}
		std::cout << '|';
		std::cout << std::setw(10) << std::right << tmp;
	}
	else if (!_printMod)
	{
		std::cout << this->_firstName << std::endl;
		std::cout << this->_lastName << std::endl;
		std::cout << this->_nickName << std::endl;
		std::cout << this->_login << std::endl;
		std::cout << this->_postalAddress << std::endl;
		std::cout << this->_phoneNumber << std::endl;
		std::cout << this->_birthdayDate << std::endl;
		std::cout << this->_favoriteMeal << std::endl;
		std::cout << this->_underwearColor << std::endl;
		std::cout << this->_darkestSecret << std::endl;
	}
}
