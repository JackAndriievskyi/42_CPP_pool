// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassObjectEnemy.hpp                               :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:30:42 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:30:43 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "ClassGameObject.hpp"

class ObjectEnemy : public GameObject 
{

public:

	ObjectEnemy(const int, const int);
	~ObjectEnemy();

	void				print(void *);
	void				move();

private:

	ObjectEnemy();
	void				move(int i);
	
};

#define ENEMY_SHELL1 "/^^^\\" 
#define ENEMY_SHELL2 "\\- -/" 
#define ENEMY_SHELL3 " *^* " 
#define ENEMY_SHELL_SIZE_X 5
#define ENEMY_SHELL_SIZE_Y 3
#define ENEMY_CYCLE 500
