// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex10.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 14:12:15 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 14:12:17 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include <iostream>
#include <fstream>
#include <string>

void		printStream(std::istream &stream)
{
	std::string		buffer;

	while (std::getline(stream, buffer))
		std::cout << buffer << std::endl;
}

void		printFile(std::string fName) {
	std::ifstream	fin(fName, std::ios_base::out);

	if (!fin.is_open())
		std::cout << "Can not open file!" << std::endl;
	else {
		printStream(fin);
		fin.close();
	}
}

int main(int argc, char **argv) {
	if (argc == 1)
		printStream(std::cin);
	else
		for (int i = 1; i < argc; i++)
			printFile(argv[i]);
	return 0;
}
