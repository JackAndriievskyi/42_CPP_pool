// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClassList.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/07 13:22:03 by yandriie          #+#    #+#             //
//   Updated: 2018/10/07 13:22:03 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClassList.hpp"
#include <string>

Node::~Node() {
	delete this->data;
}

List::List() : _size(0)
			 , _head(NULL) {

}

List::~List() {

	while (this->_head) {

		Node	*next = this->_head->next;
		delete this->_head;
		this->_head = next;
	}

}

void				List::push_back(GameObject * data) {

	Node *		cur = this->_head;

	if (!this->_head)
	{
		this->_head = new Node;
		this->_head->data = data;
		this->_head->next = NULL;
		this->_size++;
	}
	else
	{
		for (int i = 1; i < this->_size; i++)
			cur = cur->next;
		cur->next = new Node;
		cur = cur->next;
		cur->data = data;
		cur->next = NULL;
		this->_size++;
	}

}

void				List::erase(const int pos) {

	this->_size--;

	if (pos == 0)
	{
		Node	*next = this->_head->next;
		delete this->_head;
		this->_head = next;
	}
	else
	{
		Node *		cur = this->_head;

		for (int i = 0; i < pos - 1; i++)
			cur = cur->next;

		Node *		toDel = cur->next;
		cur->next = cur->next->next;

		delete toDel;
	}
}

int					List::getSize() const {

	return this->_size;

}

GameObject *		List::getAt(const int pos) const {

	Node *		cur = this->_head;

	for (int i = 0; i < pos; i++)
			cur = cur->next;

	return cur->data;
}