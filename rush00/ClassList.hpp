// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassList.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 13:22:18 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 13:22:19 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "ClassGameObject.hpp"

struct Node {

	GameObject 	*data;
	struct Node	*next;
	~Node();

};

class List {

public:

	List();
	~List();

	void				push_back(GameObject *);
	void				erase(const int);
	int					getSize() const;
	GameObject *		getAt(const int) const;

private:

	int			_size;
	Node *		_head;

};