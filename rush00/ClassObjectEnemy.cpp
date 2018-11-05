// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassObjectEnemy.cpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:30:35 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:30:36 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassObjectEnemy.hpp"
#include <curses.h>

ObjectEnemy::ObjectEnemy(const int x, const int y)
							: GameObject(x, y) {

	this->_moveCycle = ENEMY_CYCLE;
	this->_shellSize.x = ENEMY_SHELL_SIZE_X;
	this->_shellSize.y = ENEMY_SHELL_SIZE_Y;
	this->_coord.y = y;
	this->_coord.x = x;
}

ObjectEnemy::~ObjectEnemy() {
	
}

void				ObjectEnemy::print(void * wnd) {

	WINDOW	*field = (WINDOW*)wnd;

	mvwprintw(field, _coord.y, _coord.x, ENEMY_SHELL1);
	mvwprintw(field, _coord.y + 1, _coord.x, ENEMY_SHELL2);
	mvwprintw(field, _coord.y + 2, _coord.x, ENEMY_SHELL3);

	if (this->_lifeTime == this->_moveCycle)
		this->_lifeTime = 0;
	this->_lifeTime++;
}

void				ObjectEnemy::move() {

	if (this->_lifeTime % _moveCycle == 0)
	{
		this->_coord.y++;
		this->_lifeTime = 0;
	}

}

void				ObjectEnemy::move(int i) {

	i++;

}