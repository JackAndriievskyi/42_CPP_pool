// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 18:15:33 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 18:15:34 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperTrap.hpp"
#include "miniLib.hpp"
#include <iostream>

SuperTrap::SuperTrap(void) : ClapTrap(SUPER_DEF_NAME, SUPER_MAX_HP,
	SUPER_MAX_MP, SUPER_MEELE_ATTACK_DMG, SUPER_RANGED_ATTACK_DMG,
	SUPER_ARMOR_REDUCTION, SUPER_LVL) {

    this->_serialNumber = serialNumberGen(SUPER_SERIAL_NBR_IDF);

	std::cout << SUPER_BOOT_MESSAGE << std::endl;
	std::cout << SUPER_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name, SUPER_MAX_HP,
	SUPER_MAX_MP, SUPER_MEELE_ATTACK_DMG, SUPER_RANGED_ATTACK_DMG,
	SUPER_ARMOR_REDUCTION, SUPER_LVL) {

	this->_serialNumber = serialNumberGen(SUPER_SERIAL_NBR_IDF);

	std::cout << SUPER_BOOT_MESSAGE << std::endl;
	std::cout << SUPER_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

SuperTrap::~SuperTrap() {}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(SUPER_DEF_NAME, SUPER_MAX_HP,
	SUPER_MAX_MP, SUPER_MEELE_ATTACK_DMG, SUPER_RANGED_ATTACK_DMG,
	SUPER_ARMOR_REDUCTION, SUPER_LVL) {

	this->_name = other._name;
	this->_HP = other._HP;
	this->_MP = other._MP;
	this->_lvl = other._lvl;
	this->_serialNumber = serialNumberGen(other._serialNumber);

	std::cout << SUPER_REPRODUCTION_MESSAGE << std::endl;
	std::cout << SUPER_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

SuperTrap&		SuperTrap::operator=(SuperTrap const &other) {

	if (this != &other)
	{
		std::cout << other._name << SUPER_MIND_TRANSFER_MESSAGE(this->_name)
				  << std::endl;

		std::cout << SUPER_AFTER_MIND_TRANSFER_MESSAGE(this->_serialNumber)
				  << std::endl;

		std::cout << ((this->_HP > other._HP)
					  ? SUPER_AFTER_MIND_TRANSFER_HAPPY_MESSAGE
					  : SUPER_AFTER_MIND_TRANSFER_SAD_MESSAGE) << std::endl;
	}
	this->_name = other._name;
	return *this;
}