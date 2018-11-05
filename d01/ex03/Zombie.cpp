// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:57:32 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 12:57:33 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <iostream>

std::string Zombie::_type = ZM_TYPE_DEF;

Zombie::Zombie(std::string const &name): _name(name) {}

void Zombie::announce(void) const {
    std::cout << "<" << this->_name << " (" << this->_type << ")> I'm a zombie-girl in a zombie woooooooorld, i'm of flesh heap, my love to brains deep" << std::endl;
}