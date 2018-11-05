// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:54:40 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 12:54:41 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#pragma once
#include <string>

class Pony
{
public:
    Pony(std::string name);
    ~Pony();
private:
    bool _trueForAliveFalseForDead;
};
