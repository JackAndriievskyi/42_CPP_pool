// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:31:57 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:31:58 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

void Weapon::setType(std::string type) {
    this->_type = type;
}

std::string const& Weapon::getType() const {
    return this->_type;
}