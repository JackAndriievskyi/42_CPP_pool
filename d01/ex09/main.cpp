// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 14:25:04 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 14:33:24 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "Logger.hpp"

int				main(void)
{
	Logger		HBO("GameOfThrone.log");

	HBO.log("console", "So it starts...))))))))))))))))))))))");
	HBO.log("file", "Oh GOD, Ned Stark is DEAD! Totally, no way back he is alive!");
	HBO.log("file", "Shiiiiiiiiiiiit! Almoste all Stark family is dead! What the fuck?!!!");
	HBO.log("file", "Oh so much people dead... again... pff, who cares?");
	HBO.log("console", "W18 W18 and W18, i'm so tired of W18!");
	HBO.log("file", "Dragon dead... Why u take the best of them?!!!!!!! ;ccccc");
	return (0);
}
