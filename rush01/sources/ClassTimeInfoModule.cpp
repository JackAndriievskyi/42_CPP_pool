// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassTimeInfoModule.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:24:22 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:24:23 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassTimeInfoModule.hpp"

#include <string>
#include <time.h>

TimeInfo::TimeInfo() : _size(1) {

	this->_data[0] = "";

}

TimeInfo::~TimeInfo() {

}



TimeInfo::TimeInfo(const TimeInfo & other) {

	*this = other;

}

TimeInfo & TimeInfo::operator=(const TimeInfo & other) {

	this->_data[0] = other._data[0];
	this->_size = other._size;

	return *this;

}



size_t			TimeInfo::getSize() const {

	return this->_size;
}

std::string const *	TimeInfo::getInfo() const {

	return _data;

}

void			TimeInfo::updateInfo() {

	std::string tmp;
	time_t time_info;

    time_info = time(NULL);
    tmp = "Current time: ";
    _data[0] = tmp + std::string(ctime(&time_info));
    _data[0].erase(_data[0].size() - 1);

}