// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   check.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 13:15:46 by yandriie          #+#    #+#             //
//   Updated: 2018/10/11 13:15:46 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <exception>
#include "Array.tpp"

int				main(void)
{
	Array<int>			I_arr1(20);
	Array<int>			I_arr2;

	std::cout << "First int array size: " << I_arr1.size() << std::endl;
	std::cout << "Empty int array size: " << I_arr2.size() << std::endl;

	I_arr1[10] = 42;
	std::cout << "I_arr1[10] : " << I_arr1[10] << std::endl;
	I_arr1[11] = 84;
	std::cout << "I_arr1[11] : " << I_arr1[11] << std::endl;

	I_arr2 = I_arr1;
	std::cout << "Copying I_arr1 in I_arr2..." << std::endl;
	I_arr1[10] = 0;
	I_arr1[11] = 0;

	std::cout << "I_arr2[10] : " << I_arr2[10] << std::endl;
	std::cout << "I_arr2[11] : " << I_arr2[11] << std::endl;

	std::cout << "Trying to set I_arr1[30]" << std::endl;
	try {
		I_arr1[30] = 42;
	}
	catch (std::exception &e) {
		std::cout << "ERROR (expected): " << e.what() << std::endl;
	}

	std::cout << "Exception catched? Yes? Nice!" << std::endl;


	Array<std::string>	S_arr1(10);
	S_arr1[8] = "Hello, ";
	S_arr1[9] = "World!";

	std::cout << "S_arr1[10] : " << S_arr1[8] << std::endl;
	std::cout << "S_arr1[11] : " << S_arr1[9] << std::endl;

	std::cout << "Copying S_arr1 in S_arr2..." << std::endl;


	Array<std::string>	S_arr2(S_arr1);
	std::cout << "S_arr2[10] : " << S_arr2[8] << std::endl;
	std::cout << "S_arr2[11] : " << S_arr2[9] << std::endl;

	return (0);
}