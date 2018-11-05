// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 08:48:53 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 08:52:10 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "Human.hpp"

int				main(void)
{
	Human		jasb("Jay and Silence Bob");

	jasb.action("meleeAttack", "Hollywood");
	jasb.action("rangedAttack", "Hollywood");
	jasb.action("intimidatingShout", "Hollywood");
	return (0);
}
