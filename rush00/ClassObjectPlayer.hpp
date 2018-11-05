// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassObjectPlayer.hpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:30:14 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:30:15 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "ClassGameObject.hpp"

class ObjectPlayer : public GameObject 
{

public:

	ObjectPlayer(const int, const int);
	~ObjectPlayer();

	void				print(void *);
	void				move();
	void				move(int);
				
private:

	ObjectPlayer();

};

#define PLAYER_SHELL1 "   .   "
#define PLAYER_SHELL2 " _/^\\_ "
#define PLAYER_SHELL3 ":#####:"
#define PLAYER_SHELL_SIZE_X 7
#define PLAYER_SHELL_SIZE_Y 3
#define PLAYER_CYCLE 1