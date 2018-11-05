// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassOsInfoModule.cpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:23:59 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:24:00 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassOsInfoModule.hpp"

#include <string>
#include <sys/utsname.h>

OsInfo::OsInfo() : _size(4) {

	this->_data[0] = "";
	this->_data[1] = "";
	this->_data[2] = "";
	this->_data[3] = "";

}

OsInfo::~OsInfo() {

}



OsInfo::OsInfo(const OsInfo & other) {

	*this = other;

}

OsInfo & OsInfo::operator=(const OsInfo & other) {

	this->_data[0] = other._data[0];
	this->_data[1] = other._data[1];
	this->_data[2] = other._data[2];
	this->_data[3] = other._data[3];
	this->_size = other._size;

	return *this;

}



size_t			OsInfo::getSize() const {

	return this->_size;
}

std::string const *	OsInfo::getInfo() const {

	return _data;

}

void			OsInfo::updateInfo() {

	struct utsname	uts;
	uname(&uts);

	std::string tmp;

	tmp = "OS name: ";
	this->_data[0] = tmp + uts.sysname;

	tmp = "Realease: ";
	this->_data[1] = tmp + uts.release;

	tmp = "Version: ";
	this->_data[2] = tmp + uts.version;

	tmp = "Hw id: ";
	this->_data[3] = tmp + uts.machine;
}