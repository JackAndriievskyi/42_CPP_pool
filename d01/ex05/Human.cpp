// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:17:38 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:17:39 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Brain const& Human::getBrain() const{
    return this->_br;
}

std::string Human::identify() const {
    return this->_br.identify();
}