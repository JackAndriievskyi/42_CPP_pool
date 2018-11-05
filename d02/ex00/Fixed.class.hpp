// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 09:59:16 by yandriie          #+#    #+#             //
//   Updated: 2018/10/04 09:59:20 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &		operator=(Fixed const & rhs);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);

	private:
		static int const	_nBit;

		int					_rawBits;
};
