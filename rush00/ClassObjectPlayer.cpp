// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassObjectPlayer.cpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:30:06 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:30:07 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassObjectPlayer.hpp"
#include <curses.h>

ObjectPlayer::ObjectPlayer(const int x, const int y)
							: GameObject(x, y) {

	this->_moveCycle = PLAYER_CYCLE;
	this->_shellSize.x = PLAYER_SHELL_SIZE_X;
	this->_shellSize.y = PLAYER_SHELL_SIZE_Y;
	this->_coord.y = y - _shellSize.y;
	this->_coord.x = x - _shellSize.x / 2;

}

ObjectPlayer::~ObjectPlayer() {
	
}

void				ObjectPlayer::print(void * wnd) {
	
	WINDOW	*field = (WINDOW*)wnd;

	mvwprintw(field, _coord.y, _coord.x, PLAYER_SHELL1);
	mvwprintw(field, _coord.y + 1, _coord.x, PLAYER_SHELL2);
	mvwprintw(field, _coord.y + 2, _coord.x, PLAYER_SHELL3);

	if (this->_lifeTime == this->_moveCycle)
		this->_lifeTime = 0;
	this->_lifeTime++;
	
}

void				ObjectPlayer::move(int side) {

	if (this->_lifeTime % _moveCycle == 0)
	{
		this->_coord.x += side;
		this->_lifeTime = 0;
	}

}

void				ObjectPlayer::move() {

}