// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 08:53:53 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 08:54:01 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include "Human.hpp"

Human::Human(char const *name):
	name(name) {}

Human::~Human(void) {}

void			Human::meleeAttack(std::string const &target)
{
	std::cout << name << " attack " << target << " with a melee attack" << std::endl;
}

void			Human::rangedAttack(std::string const &target)
{
	std::cout << name << " attack " << target << " with a ranged attack" << std::endl;
}

void			Human::intimidatingShout(std::string const &target)
{
	std::cout << name << " attack " << target << " with a intimidating shout" << std::endl;
}

void			Human::action(std::string const &action_name, std::string const &target)
{
	t_attack		attacks[ATTACK_NBR] = {
		{"meleeAttack", &Human::meleeAttack},
		{"rangedAttack", &Human::rangedAttack},
		{"intimidatingShout", &Human::intimidatingShout}
	};

	for (int i = 0; i < ATTACK_NBR; i++)
		if (action_name == attacks[i].name)
			(this->*attacks[i].func)(target);
}
