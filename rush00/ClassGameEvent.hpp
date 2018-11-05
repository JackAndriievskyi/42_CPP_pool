// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassGameEvent.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:07:15 by yandriie          #+#    #+#             //
//   Updated: 2018/10/06 12:07:16 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include "ClassEventType.hpp"
#include "ClassList.hpp"
#include "ClassObjectProjectile.hpp"
#include "ClassObjectPlayer.hpp"
#include "ClassObjectEnemy.hpp"
#include "ClassObjectBackgroundStar.hpp"

class GameEvent : public EventType
{

private:

	explicit GameEvent();
	~GameEvent();

	static void			_menuProcess();
	static void			_gameProcess();
	static void			_spawnEnemy(List &, int);
	static void			_spawnBackground(List &, int);
	static int			_checkEndOfGameCollision(GameObject*, GameObject*);
	static int			_checkHitEnemyCollision(GameObject*, List*);
	static int			_checkHitEnemyCollision(List*, GameObject*);
	static int			_checkBulletsOutOfField(GameObject*);
	static int			_checkBkgCollision(GameObject *bkg);

	static int			_gameCycle;

protected:

	static void			_outGameProcess();

};

#define BUTTON_ESC 27
#define BUTTON_ENTER '\n'
#define BUTTON_SPACE ' '
#define WINY 50
#define WINX 100