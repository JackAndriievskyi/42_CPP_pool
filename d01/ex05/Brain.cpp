// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:17:15 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:17:15 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

std::string Brain::identify() const {
	_logic = true;
    std::stringstream stream;
    stream << std::hex << this;
    std::string ret;
    stream >> ret;
    return ret;
}