// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassObjectProjectile.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:33:38 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:33:39 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "ClassGameObject.hpp"

class ObjectProjectile : public GameObject 
{

public:

	ObjectProjectile(const int, const int);
	~ObjectProjectile();

	void				print(void *);
	void				move();

private:

	ObjectProjectile();
	void				move(int i);
	
};

#define PROJECTILE_SHELL "|"
#define PROJECTILE_SHELL_SIZE_X 1
#define PROJECTILE_SHELL_SIZE_Y 1
#define PROJECTILE_CYCLE 50