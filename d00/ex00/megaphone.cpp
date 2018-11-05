// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 08:57:00 by yandriie          #+#    #+#             //
//   Updated: 2018/10/01 09:12:19 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

char*	toUpper(char *str)
{
	int		i = -1;

	while (str[++i] != '\0')
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += 'A' - 'a';

	return str;
}

int		main(int argc, char* argv[])
{
	int		i = 1;

	if (argc > 1) 
	{
		while (i < argc)
			std::cout << toUpper(argv[i++]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	return (0);
}
