// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassGameObject.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 10:29:41 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 10:29:42 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

typedef struct s_coord
{
	int x;
	int y;
}t_coord;

class GameObject
{

public:

	virtual void				print(void *);
	virtual void				move();
	virtual void				move(int);

	int							getCoord(char c) const;
	int							getSize(char c) const;

	virtual ~GameObject();
	
protected:

	GameObject(const int, const int);

	t_coord				_coord;
	int					_lifeTime;

	t_coord				_shellSize;
	int					_moveCycle;

private:
	GameObject();
};