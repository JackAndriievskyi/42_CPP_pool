// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 08:54:52 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 08:54:56 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include <string>

class Human
{
	private:

		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);
		void		intimidatingShout(std::string const &target);

	public:
		std::string		name;

		Human(char const *name);
		~Human(void);
		void		action(std::string const &action_name, std::string const &target);
};

typedef struct	s_attack
{
	std::string     name;
    void        	(Human::*func)(std::string const &);
}t_attack;

#define ATTACK_NBR 3
