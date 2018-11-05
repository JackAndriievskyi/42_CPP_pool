// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassGameObject.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:29:27 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:29:29 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassGameObject.hpp"

GameObject::GameObject(const int x, const int y) : _lifeTime(0)
												 , _moveCycle(0) {

	this->_coord.y = y;
	this->_coord.x = x;
	this->_shellSize.x = 0;
	this->_shellSize.y = 0;
}

GameObject::~GameObject() {

}

GameObject::GameObject() {

	this->_coord.y = 0;
	this->_coord.x = 0;
	this->_shellSize.x = 0;
	this->_shellSize.y = 0;
	this->_lifeTime = 0;
	this->_moveCycle = 0;
}




void				GameObject::print(void * wnd) {
	long int *tmp = (long  *)wnd;
	tmp++;
}

void				GameObject::move() {
	
}

void				GameObject::move(int i) {
	i++;
}



int					GameObject::getCoord(char c) const {

	if (c == 'x')
		return this->_coord.x;
	if (c == 'y')
		return this->_coord.y;
	return -1;
	
}

int					GameObject::getSize(char c) const {

	if (c == 'x')
		return this->_shellSize.x;
	if (c == 'y')
		return this->_shellSize.y;
	return -1;
}