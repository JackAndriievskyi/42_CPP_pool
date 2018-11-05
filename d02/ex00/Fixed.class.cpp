// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 10:00:02 by yandriie          #+#    #+#             //
//   Updated: 2018/10/04 10:02:27 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>

int	const	Fixed::_nBit = 8;

Fixed::Fixed(void) {
	this->_rawBits = 0;
	std::cout << "Default Constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int			Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void		Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

Fixed	&Fixed::operator=(Fixed const &other) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return *this;
}
