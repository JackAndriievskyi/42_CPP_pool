// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 09:59:16 by yandriie          #+#    #+#             //
//   Updated: 2018/10/04 11:05:38 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>
#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(int const &);
	Fixed(float const &);
	Fixed(Fixed const &);
	~Fixed(void);

	Fixed &		operator=(Fixed const &);
	
	int			getRawBits(void) const;
	void		setRawBits(int const);
	int			toInt(void) const;
	float		toFloat(void) const;

private:
	static int const	_nBit;

	int					_rawBits;
};

std::ostream	&operator<<(std::ostream &, Fixed const &);
