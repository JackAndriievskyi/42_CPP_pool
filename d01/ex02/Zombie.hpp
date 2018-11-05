// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:55:39 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:04:09 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>

#define ZM_TYPE_CNT 18
#define ZM_TYPE_1 "SEXY"
#define ZM_TYPE_2 "NORMAL"
#define ZM_TYPE_3 "WALKER"
#define ZM_TYPE_4 "RUNNER"
#define ZM_TYPE_5 "VOODOO"
#define ZM_TYPE_6 "ROMERO"
#define ZM_TYPE_7 "GHOUL"
#define ZM_TYPE_8 "INFECTED"
#define ZM_TYPE_9 "SCREAMER"
#define ZM_TYPE_10 "CRAWLER"
#define ZM_TYPE_11 "VOMITER"
#define ZM_TYPE_12 "STALKER"
#define ZM_TYPE_13 "SPITTER"
#define ZM_TYPE_14 "EXPLODER"
#define ZM_TYPE_15 "TANK"
#define ZM_TYPE_16 "BUSTER"
#define ZM_TYPE_17 "ARMORED"
#define ZM_TYPE_18 "RADIOACTIVE"
#define ZM_TYPE_DEF ZM_TYPE_2

#define ZM_NAME_CNT 18
#define ZM_NAME_1 "Lori Grimes"
#define ZM_NAME_2 "Sheriff Shane"
#define ZM_NAME_3 "Morgan Jones"
#define ZM_NAME_4 "Dale from Atlanta"
#define ZM_NAME_5 "Jim from Atlanta"
#define ZM_NAME_6 "Theodore from Atlanta"
#define ZM_NAME_7 "Merle Dixon"
#define ZM_NAME_8 "Ed Peletier"
#define ZM_NAME_9 "Sophia Peletier"
#define ZM_NAME_10 "Edwin Jenner"
#define ZM_NAME_11 "Hershel Greene"
#define ZM_NAME_12 "Beth (mad but so cute bitch) Greene"
#define ZM_NAME_13 "Jimmy (whofuckingknowsofwhatfamily) Bastard"
#define ZM_NAME_14 "Philip Blake"
#define ZM_NAME_15 "Mrs.Blake"
#define ZM_NAME_16 "Richard Foster"
#define ZM_NAME_17 "Mrs.Foster"
#define ZM_NAME_18 "Tyreese Williams"

class Zombie
{
public:
    explicit Zombie(std::string const &name);
    void announce(void) const;
    
    static std::string _type;
private:
    std::string _name;
    Zombie(void);
};
