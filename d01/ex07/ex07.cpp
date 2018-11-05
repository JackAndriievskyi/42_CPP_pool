// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex07.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:43:11 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:49:32 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>
#include <string>

void replace(std::string &targ, std::string const &s1, std::string const &s2) {
	size_t	pos;

	while ((pos = targ.find(s1)) != std::string::npos) {
		targ.erase(pos, s1.size());
		targ.insert(pos, s2);
	}
}

int main() {
	std::string fname, str1, str2;

	std::cout << "Input file name: ";
	std::getline(std::cin, fname);
	std::ifstream fin(fname, std::ios_base::out);
	if (!fin.is_open()) {
		std::cout << "File can not be open!" << std::endl;
		return (0);
	}

	std::cout << "Input the string to replace: ";
	std::getline(std::cin, str1);
	std::cout << "Input the string to replace on: ";
	std::getline(std::cin, str2);

	std::ofstream fout(fname + ".replace", std::ios_base::in | std::ios_base::trunc);
	if (!fout.is_open()) {
		std::cout << "File can not be open!" << std::endl;
		fin.close();
		return (0);
	}

	std::string buffer;
	while (std::getline(fin, buffer)) {
		replace(buffer, str1, str2);
		fout << buffer + "\n";
	}

	fin.close();
	fout.close();
	return 0;
}
