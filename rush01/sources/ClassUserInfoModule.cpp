// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassUserInfoModule.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:22:43 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:22:44 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassUserInfoModule.hpp"

#include <string>
#include <unistd.h>

UserInfo::UserInfo() : _size(2) {

	this->_data[0] = "";
	this->_data[1] = "";

}

UserInfo::~UserInfo() {

}



UserInfo::UserInfo(const UserInfo & other) {

	*this = other;

}

UserInfo & UserInfo::operator=(const UserInfo & other) {

	this->_data[0] = other._data[0];
	this->_data[1] = other._data[1];
	this->_size = other._size;

	return *this;

}



size_t			UserInfo::getSize() const {

	return this->_size;
}

std::string const *	UserInfo::getInfo() const {

	return _data;

}

void			UserInfo::updateInfo() {

	size_t		size;
	std::string tmp;

	size = sysconf(_SC_HOST_NAME_MAX);

	char		hostnameBuff[size];
	memset(hostnameBuff, 0, size);

	gethostname(hostnameBuff, size);
	tmp = "Hostname: ";
	this->_data[0] = tmp + hostnameBuff;


	size = sysconf(_SC_LOGIN_NAME_MAX);

	char		loginnameBuff[size];
	memset(loginnameBuff, 0, size);

	getlogin_r(loginnameBuff, size);
	tmp = "Username: ";
	this->_data[1] = tmp + loginnameBuff;

}