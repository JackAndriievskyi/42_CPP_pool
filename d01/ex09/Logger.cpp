// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 14:50:53 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 14:55:20 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Logger.hpp"

Logger::Logger(std::string const &out_file):
	_out_file(out_file) {}

Logger::~Logger(void) {}

std::string		Logger::makeLogEntry(std::string const &message)
{
	time_t				t = time(0);
	struct tm			*now = localtime(&t);
	std::ostringstream	entry;

	entry << '['
		<< (now->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << now->tm_mon
		<< std::setw(2) << std::setfill('0') << now->tm_mday
		<< '_'
		<< std::setw(2) << std::setfill('0') << now->tm_hour
		<< std::setw(2) << std::setfill('0') << now->tm_min
		<< std::setw(2) << std::setfill('0') << now->tm_sec
		<< "] "
		<< message;
	return (entry.str());
}

void			Logger::logToConsole(std::string const &message)
{
	std::cout << makeLogEntry(message) << std::endl;
}

void			Logger::logToFile(std::string const &message)
{
	std::ofstream	file;

	file.open(_out_file, std::ios::out | std::ios::app);
	if (file.is_open())
		file << makeLogEntry(message) << std::endl;
}

void			Logger::log(std::string const &dest, std::string const &message)
{
	t_dispatch		_outs[DISP_CNT] = {
		{"console", &Logger::logToConsole},
		{"file", &Logger::logToFile}
	};

	for (int i = 0; i < DISP_CNT; i++)
		if (dest == _outs[i].name)
			(this->*_outs[i].func)(message);
}
