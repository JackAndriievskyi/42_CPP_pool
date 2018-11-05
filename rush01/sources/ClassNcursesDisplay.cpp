// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassNcursesDisplay.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 14:32:26 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 14:32:27 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassNcursesDisplay.hpp"

#include "ClassUserInfoModule.hpp"
#include "ClassOsInfoModule.hpp"
#include "ClassRAMInfoModule.hpp"
#include "ClassTimeInfoModule.hpp"
#include "ClassCPUInfoModule.hpp"
#include "ClassNetInfoModule.hpp"

#include <iostream>
#include <string>
#include <curses.h>


NcursesDisplay::NcursesDisplay() {

}

NcursesDisplay::~NcursesDisplay() {

}



NcursesDisplay::NcursesDisplay(const NcursesDisplay &other) {

	*this = other;

}

NcursesDisplay & NcursesDisplay::operator=(const NcursesDisplay &other) {
	
	if (this == &other)
		return *this;
	return *this;

}



void			NcursesDisplay::Display() const {

	initscr();
    cbreak();
    noecho();
    keypad(stdscr, true);
    nodelay(stdscr, true);
    curs_set(0);

    WINDOW *userMonitor = newwin(4, 130, 0, 0);
    WINDOW *osMonitor = newwin(4, 130, 4, 0);
    WINDOW *timeMonitor = newwin(4, 130, 8, 0);
    WINDOW *ramMonitor = newwin(4, 130, 12, 0);
    WINDOW *cpuMonitor = newwin(4, 130, 16, 0);
    WINDOW *netMonitor = newwin(4, 130, 20, 0);
	refresh();

    int cycle = 0;

    while(1)
    {
    	cycle++;

    	if (cycle % 100 == 0)
    	{

    		cycle = 0;
			IMonitor *	module;
			std::string const *	info;

			wclear(userMonitor);
			module = new UserInfo;
			module->updateInfo();
			info = module->getInfo();
			for (size_t i = 0; i < module->getSize(); i++)
				mvwprintw(userMonitor, 1 + i, 1, info[i].c_str());
			wrefresh(userMonitor);
			delete module;


			wclear(osMonitor);
			module = new OsInfo;
			module->updateInfo();
			info = module->getInfo();
			for (size_t i = 0; i < module->getSize(); i++)
				mvwprintw(osMonitor, 1 + i, 1, info[i].c_str());
			wrefresh(osMonitor);
			delete module;


			wclear(timeMonitor);
			module = new TimeInfo;
			module->updateInfo();
			info = module->getInfo();
			for (size_t i = 0; i < module->getSize(); i++)
				mvwprintw(timeMonitor, 1 + i, 1, info[i].c_str());
			wrefresh(timeMonitor);
			delete module;


			wclear(ramMonitor);
			module = new RAMInfo;
			module->updateInfo();
			info = module->getInfo();
			for (size_t i = 0; i < module->getSize(); i++)
				mvwprintw(ramMonitor, 1 + i, 1, info[i].c_str());
			wrefresh(ramMonitor);
			delete module;


			wclear(cpuMonitor);
			module = new CPUInfo;
			module->updateInfo();
			info = module->getInfo();
			for (size_t i = 0; i < module->getSize(); i++)
				mvwprintw(cpuMonitor, 1 + i, 1, info[i].c_str());
			wrefresh(cpuMonitor);
			delete module;


			wclear(netMonitor);
			module = new NetInfo;
			module->updateInfo();
			info = module->getInfo();
			for (size_t i = 0; i < module->getSize(); i++)
				mvwprintw(netMonitor, 1 + i, 1, info[i].c_str());
			wrefresh(netMonitor);
			delete module;

			refresh();
		}


		if (getch() == 27)
			break;

	}

	clear();
	delwin(userMonitor);
	delwin(osMonitor);
	delwin(timeMonitor);
	delwin(ramMonitor);
	delwin(cpuMonitor);
	delwin(netMonitor);
	endwin();

}