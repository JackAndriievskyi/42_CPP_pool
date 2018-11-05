// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassObjectBackgroundStar.hpp                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:31:27 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:31:29 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "ClassGameObject.hpp"

class ObjectBackgroundStar : public GameObject 
{

public:

	ObjectBackgroundStar(const int, const int);
	~ObjectBackgroundStar();

	void				print(void *);
	void				move();

private:

	ObjectBackgroundStar();
	void				move(int i);
	
};

#define BACKGROUND_STAR_SHELL "."
#define BACKGROUND_STAR_SHELL_SIZE_X 1
#define BACKGROUND_STAR_SHELL_SIZE_Y 1
#define BACKGROUND_STAR_CYCLE 150