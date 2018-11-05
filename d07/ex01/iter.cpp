// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 12:56:52 by yandriie          #+#    #+#             //
//   Updated: 2018/10/11 12:56:53 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

template<typename T>
void		iter(T *arr, size_t size, void (*func)(T &)) {

	for (size_t i = 0; i < size / sizeof(T); i++)
		(*func)(arr[i]);

}

template<typename T>
void		print(T &val) {

	std::cout << val << std::endl;

}

int main( void ) {

	int I_arr[] = {1, 2, 3, 4, 5};
	std::string S_arr[] = {
		"str1",
		"str2",
		"str3"
	};
	char C_arr[] = {
		'H',
		'E',
		'L',
		'L',
		'O'
	};

	iter<int>(I_arr, sizeof(I_arr), &print<int>);

	iter<std::string>(S_arr, sizeof(S_arr), &print<std::string>);

	iter<char>(C_arr, sizeof(C_arr), &print<char>);

}