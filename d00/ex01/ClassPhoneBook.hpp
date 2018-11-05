// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassPhoneBook.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 09:57:01 by yandriie          #+#    #+#             //
//   Updated: 2018/10/01 12:10:16 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassContactForm.hpp"

#define PHONE_BOOK_SIZE 8

class	PhoneBook
{
public:
	PhoneBook();
	void	add(void);
	void	search(void) const;
private:
	ContactForm _cf[PHONE_BOOK_SIZE];
	int			_activeContacts;
};
