// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   miniLib.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 13:39:22 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 13:39:23 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>

std::string		serialNumberGen(std::string const &);
std::string     toString(unsigned int);
unsigned int	rand(unsigned int);

#define PRE_SERIAL_NUMBER_STR ".v_"
#define SERIAL_NUMBER_COPY_STR "#copy"