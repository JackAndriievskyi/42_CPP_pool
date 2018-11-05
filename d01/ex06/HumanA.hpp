// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:32:10 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:32:11 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon& weapon);
    void attack() const;
private:
    HumanA();
    std::string _name;
    Weapon& _weapon;
};