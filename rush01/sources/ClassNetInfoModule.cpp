// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassNetInfoModule.cpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 15:09:23 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 15:09:24 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassNetInfoModule.hpp"

#include <string>
#include <iostream>

NetInfo::NetInfo() : _size(1) {

	this->_data[0] = "";

}

NetInfo::~NetInfo() {

}



NetInfo::NetInfo(const NetInfo & other) {

	*this = other;

}

NetInfo & NetInfo::operator=(const NetInfo & other) {

	this->_data[0] = other._data[0];
	this->_size = other._size;

	return *this;

}



size_t			NetInfo::getSize() const {

	return this->_size;
}

std::string const *	NetInfo::getInfo() const {

	return _data;

}

void			NetInfo::updateInfo() {

    FILE*           pipe = popen("top -l 1 | grep Networks:", "r");


    if (!pipe)
        return ;

    char	netBuff[256];
    fgets(netBuff, 256, pipe);
    pclose(pipe);

    this->_data[0] = netBuff;
    _data[0].erase(_data[0].size() - 1);
}