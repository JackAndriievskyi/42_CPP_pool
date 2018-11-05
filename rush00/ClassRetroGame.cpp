// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassRetroGame.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 09:40:11 by yandriie          #+#    #+#             //
//   Updated: 2018/10/06 12:11:32 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassRetroGame.hpp"
#include <iostream>



void			RetroGame::runGame() {

	_outGameProcess();

}

void			RetroGame::endGame() {

	if (_isBad())
		_report();

	_setEventDefaults();
}

void			RetroGame::_report() {

	std::cout << REPORT_MESSAGE << MAIL << std::endl;

}