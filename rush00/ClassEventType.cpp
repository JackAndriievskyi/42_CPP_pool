// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassEventType.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:37:04 by yandriie          #+#    #+#             //
//   Updated: 2018/10/06 12:37:06 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassEventType.hpp"

bool			EventType::_events[] = {false, false, false,
											false, false, false};



bool			EventType::_isInit() {

	return _events[INIT];
}

bool			EventType::_isMenu() {

	return _events[MENU];

}

bool			EventType::_isGame() {

	return _events[GAME];

}

bool			EventType::_isPause() {

	return _events[PAUSE];

}

bool			EventType::_isEnd() {

	return _events[END];

}

bool			EventType::_isBad() {

	return _events[BAD];

}



void			EventType::_setEvent(int event) {

	if (event == INIT)
		if (_isInit() || _isMenu() || _isGame() || _isPause() || _isEnd())
			_events[BAD] = true;

	if (event == MENU)
		if (_isInit() || _isMenu() || _isGame() || _isPause() || _isEnd())
			_events[BAD] = true;

	if (event == GAME)
		if (_isInit() || _isMenu() || _isGame() || _isPause() || _isEnd())
			_events[BAD] = true;

	if (event == PAUSE)
		if (_isInit() || _isMenu() || _isPause() || _isEnd())
			_events[BAD] = true;

	if (event == END)
		if (_isInit() || _isMenu() || _isGame() || _isPause() || _isEnd())
			_events[BAD] = true;

	if (_events[BAD] == true)
		return;
	
	_events[event] = true;
}

void			EventType::_unsetEvent(int event) {

	if (_events[event] == false)
		_events[BAD] = true;
	_events[event] = false;

}

void			EventType::_setEventDefaults() {
	
	for (unsigned long i = 0; i < sizeof(_events); i++)
		_events[i] = false;

}