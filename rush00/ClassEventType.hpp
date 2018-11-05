// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassEventType.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:37:12 by yandriie          #+#    #+#             //
//   Updated: 2018/10/06 12:37:13 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

class EventType
{

private:

	explicit EventType();
	~EventType();

	static bool			_events[];

protected:

	static bool			_isInit();
	static bool			_isMenu();
	static bool			_isGame();
	static bool			_isPause();
	static bool			_isEnd();
	static bool			_isBad();

	static void			_setEvent(int);
	static void			_unsetEvent(int);
	static void			_setEventDefaults();

	enum {
		INIT,
		MENU,
		GAME,
		PAUSE,
		END,
		BAD
	};
	
};