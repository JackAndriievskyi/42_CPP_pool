// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassObjectBackgroundStar.cpp                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:31:21 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:31:22 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassObjectBackgroundStar.hpp"
#include <ncurses.h>

ObjectBackgroundStar::ObjectBackgroundStar(const int x, const int y)
						: GameObject(x, y) {

	this->_moveCycle = BACKGROUND_STAR_CYCLE;
	this->_shellSize.x = BACKGROUND_STAR_SHELL_SIZE_X;
	this->_shellSize.y = BACKGROUND_STAR_SHELL_SIZE_Y;

}

ObjectBackgroundStar::~ObjectBackgroundStar() {

}

void				ObjectBackgroundStar::print(void * wnd) {

	WINDOW	*field = (WINDOW*)wnd;

	mvwprintw(field, _coord.y, _coord.x, BACKGROUND_STAR_SHELL);

	if (this->_lifeTime == this->_moveCycle)
		this->_lifeTime = 0;
	this->_lifeTime++;

}

void				ObjectBackgroundStar::move() {

	if (this->_lifeTime % _moveCycle == 0)
	{
		this->_coord.y++;
		this->_lifeTime = 0;
	}

}

void				ObjectBackgroundStar::move(int i) {

	i++;

}