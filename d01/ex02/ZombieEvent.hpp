// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:56:16 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:04:27 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "Zombie.hpp"

class ZombieEvent
{
public:
    static void setZombieType(std::string const &type);
    static Zombie* newZombie(std::string const &name);
};
