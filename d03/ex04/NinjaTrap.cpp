// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 17:38:19 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 17:38:22 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"
#include "miniLib.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(void) : ClapTrap(NINJA_DEF_NAME, NINJA_MAX_HP,
	NINJA_MAX_MP, NINJA_MEELE_ATTACK_DMG, NINJA_RANGED_ATTACK_DMG,
	NINJA_ARMOR_REDUCTION, NINJA_LVL) {

    this->_serialNumber = serialNumberGen(NINJA_SERIAL_NBR_IDF);

	std::cout << NINJA_BOOT_MESSAGE << std::endl;
	std::cout << NINJA_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name, NINJA_MAX_HP,
	NINJA_MAX_MP, NINJA_MEELE_ATTACK_DMG, NINJA_RANGED_ATTACK_DMG,
	NINJA_ARMOR_REDUCTION, NINJA_LVL) {

	this->_serialNumber = serialNumberGen(NINJA_SERIAL_NBR_IDF);

	std::cout << NINJA_BOOT_MESSAGE << std::endl;
	std::cout << NINJA_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

NinjaTrap::~NinjaTrap() {}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(NINJA_DEF_NAME, NINJA_MAX_HP,
	NINJA_MAX_MP, NINJA_MEELE_ATTACK_DMG, NINJA_RANGED_ATTACK_DMG,
	NINJA_ARMOR_REDUCTION, NINJA_LVL) {

	this->_name = other._name;
	this->_HP = other._HP;
	this->_MP = other._MP;
	this->_lvl = other._lvl;
	this->_serialNumber = serialNumberGen(other._serialNumber);

	std::cout << NINJA_REPRODUCTION_MESSAGE << std::endl;
	std::cout << NINJA_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

NinjaTrap&		NinjaTrap::operator=(NinjaTrap const &other) {

	if (this != &other)
	{
		std::cout << other._name << NINJA_MIND_TRANSFER_MESSAGE(this->_name)
				  << std::endl;

		std::cout << NINJA_AFTER_MIND_TRANSFER_MESSAGE(this->_serialNumber)
				  << std::endl;

		std::cout << ((this->_HP > other._HP)
					  ? NINJA_AFTER_MIND_TRANSFER_HAPPY_MESSAGE
					  : NINJA_AFTER_MIND_TRANSFER_SAD_MESSAGE) << std::endl;
	}
	this->_name = other._name;
	return *this;
}






void			NinjaTrap::ninjaShoebox(FragTrap &target) const {
	std::cout << NINJA_SPEC_ATTACK1_MESSAGE(target.getName()) << std::endl;
	target.takeDamage(rand(50));
}

void			NinjaTrap::ninjaShoebox(ScavTrap &target) const {
	std::cout << NINJA_SPEC_ATTACK2_MESSAGE(target.getName()) << std::endl;
	target.beRepaired(rand(10));
}