// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassGameEvent.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:06:43 by yandriie          #+#    #+#             //
//   Updated: 2018/10/06 12:06:44 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassGameEvent.hpp"

#include <curses.h>
#include <iostream>
#include <locale.h>
#include <unistd.h>
#include <cstdlib>

int 			GameEvent::_gameCycle = 0;

void			GameEvent::_menuProcess() {

	if (!has_colors())
	{
		_unsetEvent(MENU);
		_setEvent(BAD);
	    return ;
	}

	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_WHITE, init_color(0, 0, 51, 102));


	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *launchWin = newwin(30, 110, (yMax - 6) / 4, (xMax - 106) / 2);

	wattron(launchWin, COLOR_PAIR(2) | A_BOLD);
	mvwprintw(launchWin, 1, 0, "███████╗██████╗  █████╗  ██████╗███████╗    ██╗███╗   ██╗██╗   ██╗ █████╗ ██████╗ ███████╗██████╗ ███████╗\n██╔════╝██╔══██╗██╔══██╗██╔════╝██╔════╝    ██║████╗  ██║██║   ██║██╔══██╗██╔══██╗██╔════╝██╔══██╗██╔════╝\n███████╗██████╔╝███████║██║     █████╗      ██║██╔██╗ ██║██║   ██║███████║██║  ██║█████╗  ██████╔╝███████╗\n╚════██║██╔═══╝ ██╔══██║██║     ██╔══╝      ██║██║╚██╗██║╚██╗ ██╔╝██╔══██║██║  ██║██╔══╝  ██╔══██╗╚════██║\n███████║██║     ██║  ██║╚██████╗███████╗    ██║██║ ╚████║ ╚████╔╝ ██║  ██║██████╔╝███████╗██║  ██║███████║\n╚══════╝╚═╝     ╚═╝  ╚═╝ ╚═════╝╚══════╝    ╚═╝╚═╝  ╚═══╝  ╚═══╝  ╚═╝  ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝");

	std::string message("...Press ENTER to start...");
	mvwprintw(launchWin, 20, (110 - message.size()) / 2, message.c_str());
	refresh();
	wrefresh(launchWin);

	keypad(launchWin, true);
	int key;


	key = wgetch(launchWin);
	if (key == BUTTON_ENTER)
	{ 
		_unsetEvent(MENU);
		_setEvent(GAME);
	}
	if (key == BUTTON_ESC)
	{
		_unsetEvent(MENU);
		_setEvent(END);
	}

	wclear(launchWin);
	delwin(launchWin);
	clear();
}

void			GameEvent::_gameProcess() {

	int myMax, mxMax;
	getmaxyx(stdscr, myMax, mxMax);

	WINDOW *field = newwin(50 , 110, 0, (mxMax - 106) / 2);

	WINDOW *pause;

	keypad(field, true);
	nodelay(field, true);

	List                _backgroundObjs;
	List 				_gameObjs;
	List				_bulletsObjs;

	int yMax, xMax;
	getmaxyx(field, yMax, xMax);

	_gameObjs.push_back(new ObjectPlayer(xMax / 2, yMax));

	while(_isGame() && !_isBad())
	{
		if (_isPause())
		{
			wclear(pause);
			std::string message("P A U S E D");
			mvwprintw(pause, 0, 0, message.c_str());
			wrefresh(pause);

			int key = wgetch(field);

			if (key == BUTTON_SPACE)
			{
				_unsetEvent(PAUSE);

				wclear(pause);
				delwin(pause);
			}
			if (key == BUTTON_ESC)
			{
				_unsetEvent(PAUSE);
				_unsetEvent(GAME);
				_setEvent(MENU);

				wclear(field);
				clear();
				delwin(field);
				delwin(pause);
			}
		}
		else if (!_isPause() && !_isBad())
		{
			_gameCycle++;

			int key = getch();

			if (key == BUTTON_SPACE)
			{
				_setEvent(PAUSE);
				pause = newwin(1, 11, yMax / 2, mxMax / 2 - 5);
				continue;
			}

			if (key == BUTTON_ESC)
			{
				_unsetEvent(GAME);
				_setEvent(MENU);

				break;
			}

			//
			if (key == KEY_LEFT)
			{
				_gameObjs.getAt(0)->move(-1);
				if (_gameObjs.getAt(0)->getCoord('x') < 0)
					_gameObjs.getAt(0)->move(1);
			}

			if (key == KEY_RIGHT)
			{
				_gameObjs.getAt(0)->move(1);
				if (_gameObjs.getAt(0)->getCoord('x') + _gameObjs.getAt(0)->getSize('x') > xMax)
					_gameObjs.getAt(0)->move(-1);
			}

			if (key == KEY_UP )
			{
				_bulletsObjs.push_back(new ObjectProjectile(_gameObjs.getAt(0)->getCoord('x') + _gameObjs.getAt(0)->getSize('x') / 2,
														_gameObjs.getAt(0)->getCoord('y')));
			}

			_spawnEnemy(_gameObjs, xMax);
			_spawnBackground(_backgroundObjs, xMax);
			
			for (int i = 0; i < _backgroundObjs.getSize(); i++)
            {
                _backgroundObjs.getAt(i)->move();
                if (_checkBkgCollision(_backgroundObjs.getAt(i)))
                    _backgroundObjs.erase(i--);
            }
			for (int i = 0; i < _gameObjs.getSize(); i++)
			{
				_gameObjs.getAt(i)->move();
				if (_checkEndOfGameCollision(_gameObjs.getAt(0), _gameObjs.getAt(i)))
				{
					//END OF GAME
					_unsetEvent(GAME);
					_setEvent(MENU);
					break;

				}
				if (_checkHitEnemyCollision(_gameObjs.getAt(i), &_bulletsObjs))
					_gameObjs.erase(i--);
			}
			//check collis
			for (int i = 0; i < _bulletsObjs.getSize(); i++)
			{
				_bulletsObjs.getAt(i)->move();
				if (_checkBulletsOutOfField(_bulletsObjs.getAt(i)))
					_bulletsObjs.erase(i--);
				else if (_checkHitEnemyCollision(&_gameObjs, _bulletsObjs.getAt(i)))
					_bulletsObjs.erase(i--);
			}
		
			//checck collis enemy/bullet
			wclear(field);
			for (int i = 0; i < _backgroundObjs.getSize(); i++)
				_backgroundObjs.getAt(i)->print(field);
			for (int i = 0; i < _gameObjs.getSize(); i++)
				_gameObjs.getAt(i)->print(field);
			for (int i = 0; i < _bulletsObjs.getSize(); i++)
				_bulletsObjs.getAt(i)->print(field);		
				//
			wclear(field);
			wrefresh(field);

			if (_gameCycle == 9000)
				_gameCycle = 0;
		}

	}

	wclear(field);
	clear();
	delwin(field);
}

void			GameEvent::_outGameProcess() {

	_setEvent(INIT);

	setlocale(LC_ALL, "");
	initscr();
    cbreak();
    noecho();
    keypad(stdscr, true);
    nodelay(stdscr, true);
    curs_set(0);

	_unsetEvent(INIT);



	_setEvent(MENU);

	while (!_isEnd() && !_isBad())
	{

		if (_isMenu())
			_menuProcess();
		else if (_isGame())
			_gameProcess();
		refresh();
	}

	_unsetEvent(END);



	endwin();

}

void			GameEvent::_spawnEnemy(List & enemyList, int xMax) {

	if ((_gameCycle % (1501 + rand() % 3000)) == 0)
		enemyList.push_back(new ObjectEnemy(rand() % (xMax - ENEMY_SHELL_SIZE_X) ,0));

}

void			GameEvent::_spawnBackground(List & backList, int xMax) {
	
	if ((_gameCycle % (150 + rand() % 300)) == 0)
		backList.push_back(new ObjectBackgroundStar(rand() % (xMax - BACKGROUND_STAR_SHELL_SIZE_X), 0));

}

int				GameEvent::_checkEndOfGameCollision(GameObject *player, GameObject *enemy) {
	
	if (player == enemy)
		return 0;
	else if (enemy->getCoord('y') + (ENEMY_SHELL_SIZE_Y - 1) == player->getCoord('y'))
		return 1;
	return 0;
}

int				GameEvent::_checkHitEnemyCollision(GameObject *enemy, List *bulletList) {

	for (int i = 0; i < bulletList->getSize(); i++)
	{
		if ((bulletList->getAt(i)->getCoord('y') == (enemy->getCoord('y') + enemy->getSize('y') - 1)) &&
			(bulletList->getAt(i)->getCoord('x') >= enemy->getCoord('x')) && (bulletList->getAt(i)->getCoord('x') <= (enemy->getCoord('x') + enemy->getSize('x') - 1)))
		{
			bulletList->erase(i);
			return 1;
		}
	}
	return 0;
}

int				GameEvent::_checkHitEnemyCollision(List *enemyList, GameObject *bullet) {

	for (int i = 1; i < enemyList->getSize(); i++)
	{
		if ((bullet->getCoord('y') == (enemyList->getAt(i)->getCoord('y') + enemyList->getAt(i)->getSize('y') - 1)) &&
			(bullet->getCoord('x') >= enemyList->getAt(i)->getCoord('x')) && (bullet->getCoord('x') <= (enemyList->getAt(i)->getCoord('x') + enemyList->getAt(i)->getSize('x') - 1))) 
		{
			enemyList->erase(i);
			return 1;
		}
	}
	return 0;
}

int				GameEvent::_checkBulletsOutOfField(GameObject *bullet) {
	
	if (bullet->getCoord('y') < 0)
		return 1;
	else
		return 0;
}


int                GameEvent::_checkBkgCollision(GameObject *bkg) {

    if (bkg->getCoord('y') > WINY)
        return 1;
    return 0;
}