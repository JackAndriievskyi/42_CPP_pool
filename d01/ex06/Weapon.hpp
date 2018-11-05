// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:32:02 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:32:03 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>

class Weapon
{
public:
    Weapon(std::string type);
    void setType(std::string type);
    std::string const& getType() const;
private:
    std::string _type;
};