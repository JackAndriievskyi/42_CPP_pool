// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:56:08 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 12:56:09 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string const &type) {
        Zombie::_type = type;
}

Zombie* ZombieEvent::newZombie(std::string const &name) {
    return new Zombie(name);
}
