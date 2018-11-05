// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:57:51 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 12:57:53 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "Zombie.hpp"
#include <sys/time.h>

class ZombieHorde
{
public:
    ZombieHorde(void);
    ZombieHorde(const int &cnt);
    ~ZombieHorde(void);
    void announce() const;
private:
    static void setZombieType(std::string const &type);
    static Zombie* newZombie(std::string const &name);
    static int getRand(long int delim);
    static std::string randTypeGen();
    static std::string randNameGen();
    
    Zombie** _zombie;
    int _zmCnt;
};