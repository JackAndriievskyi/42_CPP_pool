// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassConsoleDisplay.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 14:32:14 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 14:32:15 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassConsoleDisplay.hpp"

#include "ClassUserInfoModule.hpp"
#include "ClassOsInfoModule.hpp"
#include "ClassRAMInfoModule.hpp"
#include "ClassTimeInfoModule.hpp"
#include "ClassCPUInfoModule.hpp"
#include "ClassNetInfoModule.hpp"

#include <iostream>
#include <string>


ConsoleDisplay::ConsoleDisplay() {

}

ConsoleDisplay::~ConsoleDisplay() {

}



ConsoleDisplay::ConsoleDisplay(const ConsoleDisplay &other) {

	*this = other;

}

ConsoleDisplay & ConsoleDisplay::operator=(const ConsoleDisplay &other) {
	
	if (this == &other)
		return *this;
	return *this;

}



void			ConsoleDisplay::Display() const {

	IMonitor *	module;
	std::string const *	info;


	module = new UserInfo;
	module->updateInfo();
	info = module->getInfo();
	for (size_t i = 0; i < module->getSize(); i++)
		std::cout << info[i] << std::endl;
	std::cout << std::endl;
	delete module;


	module = new OsInfo;
	module->updateInfo();
	info = module->getInfo();
	for (size_t i = 0; i < module->getSize(); i++)
		std::cout << info[i] << std::endl;
	std::cout << std::endl;
	delete module;


	module = new TimeInfo;
	module->updateInfo();
	info = module->getInfo();
	for (size_t i = 0; i < module->getSize(); i++)
		std::cout << info[i] << std::endl;
	std::cout << std::endl;
	delete module;


	module = new RAMInfo;
	module->updateInfo();
	info = module->getInfo();
	for (size_t i = 0; i < module->getSize(); i++)
		std::cout << info[i] << std::endl;
	std::cout << std::endl;
	delete module;


	module = new CPUInfo;
	module->updateInfo();
	info = module->getInfo();
	for (size_t i = 0; i < module->getSize(); i++)
		std::cout << info[i] << std::endl;
	std::cout << std::endl;
	delete module;


	module = new NetInfo;
	module->updateInfo();
	info = module->getInfo();
	for (size_t i = 0; i < module->getSize(); i++)
		std::cout << info[i] << std::endl;
	std::cout << std::endl;
	delete module;

}