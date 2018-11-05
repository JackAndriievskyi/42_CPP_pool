// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassRetroGame.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 09:40:13 by yandriie          #+#    #+#             //
//   Updated: 2018/10/06 12:10:48 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include <string>
#include "ClassGameEvent.hpp"



class RetroGame : public GameEvent
{

public:

	static void			runGame();
	static void			endGame();

private:

	explicit RetroGame();
	~RetroGame();

	static void			_report();
};

#define REPORT_MESSAGE "If u see this message, please contact me: "
#define MAIL "jackd2pkt@gmail.com"