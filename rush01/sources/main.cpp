// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/14 15:55:46 by yandriie          #+#    #+#             //
//   Updated: 2018/10/14 15:55:47 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassConsoleDisplay.hpp"
#include "ClassNcursesDisplay.hpp"
// #include "ClassQtDisplay.hpp"

#include <iostream>

int 	print_usage( void ) {

	std::cout << "usage: {  /-c/-f}" << std::endl;
	std::cout << "\t\tflag -c for ncurses-based display output" << std::endl;
	std::cout << "\t\tflag -q for Qt-based display output" << std::endl;
	std::cout << "\t\tno flags for terminal output" << std::endl;
	
	return (0);
}


int		main(int argc, char **argv) {

	IMonitorDisplay*	display = 0;

	if (argc == 1 && argv[0][0])
		display = new ConsoleDisplay;
	else if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'c')
	 	display = new NcursesDisplay;
	// else if (argc == 2 && argv[2][0] == '-' && argv[2][1] == 'q')
	// 	display = new QtDisplay;
	else
		return print_usage();

	display->Display();
	delete display;

	return 0;
}