// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 10:00:02 by yandriie          #+#    #+#             //
//   Updated: 2018/10/04 11:03:23 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <cmath>

int	const	Fixed::_nBit = 8;

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int const &val) : _rawBits(0) {
	std::cout << "Integer Constructor called" << std::endl;
	if ((val<<this->_nBit)>>this->_nBit != val)
		throw 0;
	this->_rawBits = val<<this->_nBit;
}

Fixed::Fixed(float const &val) {
	std::cout << "Float Constructor called" << std::endl;
	if (((int)val<<this->_nBit)>>this->_nBit != (int)val)
		throw 0;
	this->_rawBits = (int)roundf(val * (1 << this->_nBit));
}

Fixed::Fixed(Fixed const &other) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

Fixed	&Fixed::operator=(Fixed const &other) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return *this;
}

int		Fixed::toInt(void) const {
	return this->_rawBits>>_nBit;
}

float	Fixed::toFloat(void) const {
	return (((float)this->_rawBits) / (1 << this->_nBit));
}

std::ostream	&operator<<(std::ostream &os, Fixed const &data) {
	os << data.toFloat();
	return os;
}
