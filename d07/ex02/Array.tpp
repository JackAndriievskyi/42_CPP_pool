// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 13:15:23 by yandriie          #+#    #+#             //
//   Updated: 2018/10/11 13:15:24 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once

#include <exception>



template<typename T>
class Array {

public:

	Array() {

		this->_size = 0;
		this->_data = nullptr;

	}

	Array(unsigned int size) {

		this->_size = size;
		this->_data = new T[_size]();

	}



	Array(const Array & other) {

		if (this->_data != nullptr)
			delete []this->_data;
		this->_data = nullptr;

		this->_size = other._size;

		if (this->_size)
		{
			this->_data = new T[_size]();
			for (size_t i = 0; i < this->_size; i++)
				this->_data[i] = other._data[i];
		}

	}

	Array &		operator=(const Array & other) {

		if (this != &other)
		{
			if (this->_data != nullptr)
				delete []this->_data;
			this->_data = nullptr;

			this->_size = other._size;

			if (this->_size)
			{
				this->_data = new T[_size]();
				for (size_t i = 0; i < this->_size; i++)
					this->_data[i] = other._data[i];
			}
		}

		return *this;
	}



	T &			operator[](size_t idx) {

		if (idx >= _size)
			throw (std::exception());

		return _data[idx];

	}

	const T &	operator[](size_t idx) const {

		if (idx >= _size)
			throw (std::exception());
		
		return _data[idx];

	}



    const size_t &	size( void ) const {

    	return _size;

    }

private:

	T*		_data;
	size_t	_size;

};