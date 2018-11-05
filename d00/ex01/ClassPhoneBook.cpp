// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassPhoneBook.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 11:51:47 by yandriie          #+#    #+#             //
//   Updated: 2018/10/01 13:37:45 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassPhoneBook.hpp"

PhoneBook::PhoneBook(): _activeContacts(0) {}

void	PhoneBook::add(void) {
	if (this->_activeContacts != PHONE_BOOK_SIZE)
	{
		this->_cf[_activeContacts].addContact();
		if (!this->_cf[_activeContacts].empty())
			this->_activeContacts++;
	}
	else
		std::cout << "Cannot add new contact! Maximum contacts count reached!"
				  << std::endl;
}

void	PhoneBook::search(void) const {
	int	idx = -1;

	if (this->_activeContacts)
	{
		ContactForm::setPrintMod(NOT_FULL_INFO_MOD);
		while (++idx < this->_activeContacts) 
		{
			std::cout << std::setw(10) << std::right << idx;
			this->_cf[idx].printInfo();
			std::cout << std::endl;
		}
		ContactForm::setPrintMod(FULL_INFO_MOD);
		idx = 0;
		std::cout << "Enter index: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> idx;
		if (idx > 0 && idx <= PHONE_BOOK_SIZE && !_cf[idx].empty())
			this->_cf[idx - 1].printInfo();
		else
			std::cout << "Contact with such index dosn't exist!" << std::endl;
	}
	else
		std::cout << "No contacts has been added" << std::endl;
}
