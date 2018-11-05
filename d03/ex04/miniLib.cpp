// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   miniLib.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 13:39:11 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 13:39:12 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "miniLib.hpp"
#include <sstream>
#include <sys/time.h>

static unsigned int		rand(unsigned int seed, unsigned int low_b) {
	struct timeval tp;
    gettimeofday(&tp, NULL);

    long int ms = tp.tv_usec;
    if (ms % seed < low_b)
    		return (unsigned int)(ms % seed + low_b);
    return (unsigned int)(ms % seed);
}

std::string		serialNumberGen(std::string const &toGen) {
	size_t	pos;
	if ((pos = toGen.find(PRE_SERIAL_NUMBER_STR)) != std::string::npos)
		return toGen + SERIAL_NUMBER_COPY_STR;
    else
    	return toGen + PRE_SERIAL_NUMBER_STR + toString(rand(1000, 100));
}

std::string      toString(unsigned int val) {
	std::stringstream   ss;
    ss << val;

	std::string         res;
    ss >> res;
    return res;
}

unsigned int		rand(unsigned int seed) {
    struct timeval tp;
    gettimeofday(&tp, NULL);

    long int ms = tp.tv_usec;
    return (unsigned int)(ms % seed);
}