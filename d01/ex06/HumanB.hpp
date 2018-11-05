// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:32:34 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:32:35 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string name);
    void attack() const;
    void setWeapon(Weapon& weapon);
private:
    std::string _name;
    Weapon* _weapon;
};