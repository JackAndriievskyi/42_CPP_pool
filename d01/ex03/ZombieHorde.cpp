// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:58:07 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 12:58:08 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

void ZombieHorde::setZombieType(std::string const &type) {
        Zombie::_type = type;
}

Zombie* ZombieHorde::newZombie(std::string const &name) {
    return new Zombie(name);
}

int ZombieHorde::getRand(long int delim) {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_usec;
    return (int)(ms % delim);
}

std::string ZombieHorde::randTypeGen() {
    std::string randTypes[ZM_TYPE_CNT] = {ZM_TYPE_1, ZM_TYPE_2, ZM_TYPE_3,
                ZM_TYPE_4, ZM_TYPE_5, ZM_TYPE_6, ZM_TYPE_7, ZM_TYPE_8,
                ZM_TYPE_9, ZM_TYPE_10, ZM_TYPE_11, ZM_TYPE_12, ZM_TYPE_13,
                ZM_TYPE_14, ZM_TYPE_15, ZM_TYPE_16, ZM_TYPE_17, ZM_TYPE_18};
    return randTypes[getRand(ZM_TYPE_CNT)];
}

std::string ZombieHorde::randNameGen() {
    std::string randNames[ZM_NAME_CNT] = {ZM_NAME_1, ZM_NAME_2, ZM_NAME_3,
                ZM_NAME_4, ZM_NAME_5, ZM_NAME_6, ZM_NAME_7, ZM_NAME_8,
                ZM_NAME_9, ZM_NAME_10, ZM_NAME_11, ZM_NAME_12, ZM_NAME_13,
                ZM_NAME_14, ZM_NAME_15, ZM_NAME_16, ZM_NAME_17, ZM_NAME_18};
    return randNames[getRand(ZM_NAME_CNT)];
}

ZombieHorde::ZombieHorde() {
    this->_zombie = nullptr;
}

ZombieHorde::ZombieHorde(const int &cnt): _zmCnt(cnt) {
    this->_zombie = new Zombie*[this->_zmCnt];
    for (int i = 0; i < this->_zmCnt; i++)
        this->_zombie[i] = ZombieHorde::newZombie(randNameGen());
}
void ZombieHorde::announce() const {
    for (int i = 0; i <this->_zmCnt; i++) {
        ZombieHorde::setZombieType(randTypeGen());
        this->_zombie[i]->announce();
    }
}

ZombieHorde::~ZombieHorde() {
    for (int i = 0; i < this->_zmCnt; i++)
        delete this->_zombie[i];
    delete []this->_zombie;
}