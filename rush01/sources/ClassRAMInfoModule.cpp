// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassRAMInfoModule.cpp                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 09:24:54 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 09:24:55 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassRAMInfoModule.hpp"

#include <string>
#include <sys/types.h>
#include <sys/sysctl.h>
#include <sstream>

RAMInfo::RAMInfo() : _size(3) {

	this->_data[0] = "";
	this->_data[1] = "";
	this->_data[2] = "";

}

RAMInfo::~RAMInfo() {

}



RAMInfo::RAMInfo(const RAMInfo & other) {

	*this = other;

}

RAMInfo & RAMInfo::operator=(const RAMInfo & other) {

	this->_data[0] = other._data[0];
	this->_data[1] = other._data[1];
	this->_data[2] = other._data[2];
	this->_size = other._size;
	return *this;

}



size_t				RAMInfo::getSize() const {

	return this->_size;

}

std::string const *	RAMInfo::getInfo() const {

	return _data;

}

void				RAMInfo::updateInfo() {

	std::string tmp;

	size_t	totalMem;
	size_t	pagesFree;
	size_t	pageSize;
	size_t	pageSpec;

	size_t	sizeTM = sizeof(totalMem);
	size_t	sizePF = sizeof(pagesFree);
	size_t	sizePS = sizeof(pageSize);
	size_t	sizePSP = sizeof(pageSpec);

	sysctlbyname("hw.memsize", &totalMem, &sizeTM, NULL, 0);
	sysctlbyname("vm.page_free_count", &pagesFree, &sizePF, NULL, 0);
	sysctlbyname("hw.pagesize", &pageSize, &sizePS, NULL, 0);
	sysctlbyname("vm.page_speculative_count", &pageSpec, &sizePSP, NULL, 0);


	tmp = "PhysMem(Total): ";
	this->_data[0] = tmp + toString(totalMem / 1024 / 1024);
	tmp = "M";
	this->_data[0] += tmp;


	tmp = "PhysMem(Used): ";
	this->_data[1] = tmp + toString((totalMem - (pagesFree + pageSpec) * pageSize) / 1024 / 1024);
	tmp = "M";
	this->_data[1] += tmp;

	tmp = "PhysMem(Unused): ";
	this->_data[2] = tmp + toString(((pagesFree + pageSpec) * pageSize) / 1024 / 1024);
	tmp = "M";
	this->_data[2] += tmp;

}



std::string 		RAMInfo::toString(size_t nbr) const {

	std::stringstream	ss;

	ss << nbr;
	return ss.str();
}