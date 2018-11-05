// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassContactForm.hpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 10:07:03 by yandriie          #+#    #+#             //
//   Updated: 2018/10/01 12:32:59 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>
#include <iostream>
#include <iomanip>

#define FULL_INFO_MOD 0
#define NOT_FULL_INFO_MOD 1
#define FMT_SIZE 10

class	ContactForm
{
public:
	bool		empty(void) const;
	void		addContact(void);
	void		printInfo(void) const;
	static void		setPrintMod(int const &printMod) {
		_printMod = printMod;
	}
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
	static int		_printMod;
};
