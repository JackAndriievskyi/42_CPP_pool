// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassObjectProjectile.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:33:06 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:33:08 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassObjectProjectile.hpp"
#include <curses.h>

ObjectProjectile::ObjectProjectile(const int x, const int y)
									: GameObject(x, y) {
										
	this->_moveCycle = PROJECTILE_CYCLE;
	this->_shellSize.x = PROJECTILE_SHELL_SIZE_X;
	this->_shellSize.y = PROJECTILE_SHELL_SIZE_Y;
}

ObjectProjectile::~ObjectProjectile() {
	
}

void				ObjectProjectile::print(void * wnd) {

	WINDOW	*field = (WINDOW*)wnd;

	mvwprintw(field, _coord.y, _coord.x, PROJECTILE_SHELL);

	if (this->_lifeTime == this->_moveCycle)
		this->_lifeTime = 0;
	this->_lifeTime++;
}

void				ObjectProjectile::move() {

	if (this->_lifeTime % _moveCycle == 0)
	{
		this->_coord.y--;
		this->_lifeTime = 0;
	}

}

void				ObjectProjectile::move(int i) {

	i++;

}