// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   phonebook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 09:49:53 by yandriie          #+#    #+#             //
//   Updated: 2018/10/01 13:57:57 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassPhoneBook.hpp"

int		main(void)
{
	std::string		cmd;
	PhoneBook		pb;

	while (std::cin >> cmd) 
	{
		if (cmd == "ADD")
			pb.add();
		else if (cmd == "SEARCH")
			pb.search();
		else if (cmd == "EXIT")
			return (0);
	}
	return (0);
}
