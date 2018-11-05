// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:54:30 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 12:54:32 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name) {
    std::cout << "Hello, dear friend! My name is " << name << "! I'm self-destructive pony! I'll show you the magic of friendship and boom! Do you wanna be my lover?" << std::endl;
    _trueForAliveFalseForDead = true;
}

Pony::~Pony() {
    std::cout << "Whatever, her comes the BOOM, ready or not!" << std::endl;
    _trueForAliveFalseForDead = false;
}
