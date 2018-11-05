// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:56:23 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 12:56:24 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include <iostream>
#include <sys/time.h>

int getRand(long int delim) {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_usec;
    return (int)(ms % delim);
}

std::string randTypeGen() {
    std::string randTypes[ZM_TYPE_CNT] = {ZM_TYPE_1, ZM_TYPE_2, ZM_TYPE_3,
                ZM_TYPE_4, ZM_TYPE_5, ZM_TYPE_6, ZM_TYPE_7, ZM_TYPE_8,
                ZM_TYPE_9, ZM_TYPE_10, ZM_TYPE_11, ZM_TYPE_12, ZM_TYPE_13,
                ZM_TYPE_14, ZM_TYPE_15, ZM_TYPE_16, ZM_TYPE_17, ZM_TYPE_18};
    return randTypes[getRand(ZM_TYPE_CNT)];
}

std::string randNameGen() {
    std::string randNames[ZM_NAME_CNT] = {ZM_NAME_1, ZM_NAME_2, ZM_NAME_3,
                ZM_NAME_4, ZM_NAME_5, ZM_NAME_6, ZM_NAME_7, ZM_NAME_8,
                ZM_NAME_9, ZM_NAME_10, ZM_NAME_11, ZM_NAME_12, ZM_NAME_13,
                ZM_NAME_14, ZM_NAME_15, ZM_NAME_16, ZM_NAME_17, ZM_NAME_18};
    return randNames[getRand(ZM_NAME_CNT)];
}

void randomChamp(const int &cnt) {
    Zombie **zombie = new Zombie*[cnt];
    for (int i = 0; i < cnt; i++)
        zombie[i] = ZombieEvent::newZombie(randNameGen());
    for (int i = 0; i < cnt; i++) {
        ZombieEvent::setZombieType(randTypeGen());
        zombie[i]->announce();
    }
    for (int i = 0; i < cnt; i++)
        delete zombie[i];
    delete []zombie;
}

int main(void) {
    randomChamp(50);
    return 0;
}
