// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:17:31 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:17:32 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "Brain.hpp"

class Human {
public:
    std::string identify() const;
    Brain const& getBrain() const;
private:
    const Brain _br;
};