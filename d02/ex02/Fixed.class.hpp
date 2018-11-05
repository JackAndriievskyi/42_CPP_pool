// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 09:59:16 by yandriie          #+#    #+#             //
//   Updated: 2018/10/04 12:44:00 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>
#include <iostream>

class Fixed {
public:
	static Fixed&		min(Fixed &, Fixed &);
	static Fixed&		max(Fixed &, Fixed &);
	static Fixed const&	min(Fixed const &, Fixed const &);
	static Fixed const&	max(Fixed const &, Fixed const &);

	Fixed(void);
	Fixed(int const &);
	Fixed(float const &);
	Fixed(Fixed const &);
	~Fixed(void);

	Fixed&		operator=(Fixed const &);
	bool		operator>(Fixed const &) const;
	bool		operator<(Fixed const &) const;
	bool		operator>=(Fixed const &) const;
	bool		operator<=(Fixed const &) const;
	bool		operator==(Fixed const &) const;
	bool		operator!=(Fixed const &) const;
	Fixed		operator+(Fixed const &) const;
	Fixed		operator-(Fixed const &) const;
	Fixed		operator*(Fixed const &) const;
	Fixed		operator/(Fixed const &) const;
	Fixed&		operator++(void);
	Fixed		operator++(int);
	Fixed&		operator--(void);
	Fixed		operator--(int);

	int			getRawBits(void) const;
	void		setRawBits(int const);
	int			toInt(void) const;
	float		toFloat(void) const;

private:
	static int const	_nBit;

	int					_rawBits;
};

std::ostream&	operator<<(std::ostream &, Fixed const &);
