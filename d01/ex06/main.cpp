// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 13:32:43 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 13:32:43 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA jay("Jay", club);
        jay.attack();
        club.setType("some other type of club");
        jay.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB silentBob("Silent Bob");
        silentBob.setWeapon(club);
        silentBob.attack();
        club.setType("some other type of club");
        silentBob.attack();
    }
    return (0);
}