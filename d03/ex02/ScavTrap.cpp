// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 14:27:24 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 13:29:39 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"
#include "miniLib.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap(SCAV_DEF_NAME, SCAV_MAX_HP,
	SCAV_MAX_MP, SCAV_MEELE_ATTACK_DMG, SCAV_RANGED_ATTACK_DMG,
	SCAV_ARMOR_REDUCTION, SCAV_LVL) {

    this->_serialNumber = serialNumberGen(SCAV_SERIAL_NBR_IDF);

	std::cout << SCAV_BOOT_MESSAGE << std::endl;
	std::cout << SCAV_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name, SCAV_MAX_HP,
	SCAV_MAX_MP, SCAV_MEELE_ATTACK_DMG, SCAV_RANGED_ATTACK_DMG,
	SCAV_ARMOR_REDUCTION, SCAV_LVL) {

	this->_serialNumber = serialNumberGen(SCAV_SERIAL_NBR_IDF);

	std::cout << SCAV_BOOT_MESSAGE << std::endl;
	std::cout << SCAV_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ScavTrap::~ScavTrap() {}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(SCAV_DEF_NAME, SCAV_MAX_HP,
	SCAV_MAX_MP, SCAV_MEELE_ATTACK_DMG, SCAV_RANGED_ATTACK_DMG,
	SCAV_ARMOR_REDUCTION, SCAV_LVL) {

	this->_name = other._name;
	this->_HP = other._HP;
	this->_MP = other._MP;
	this->_lvl = other._lvl;
	this->_serialNumber = serialNumberGen(other._serialNumber);

	std::cout << SCAV_REPRODUCTION_MESSAGE << std::endl;
	std::cout << SCAV_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ScavTrap&		ScavTrap::operator=(ScavTrap const &other) {

	if (this != &other)
	{
		std::cout << other._name << SCAV_MIND_TRANSFER_MESSAGE(this->_name)
				  << std::endl;

		std::cout << SCAV_AFTER_MIND_TRANSFER_MESSAGE(this->_serialNumber)
				  << std::endl;

		std::cout << ((this->_HP > other._HP)
					  ? SCAV_AFTER_MIND_TRANSFER_HAPPY_MESSAGE
					  : SCAV_AFTER_MIND_TRANSFER_SAD_MESSAGE) << std::endl;
	}
	this->_name = other._name;
	return *this;
}






unsigned int	ScavTrap::challengeNewcomer(std::string const &name) {

	unsigned int	(ScavTrap::*func[])(std::string const &) = {
		&ScavTrap::_specAttack1,
		&ScavTrap::_specAttack2,
		&ScavTrap::_specAttack3,
		&ScavTrap::_specAttack4,
		&ScavTrap::_specAttack5
	};

	if (this->_MP < SCAV_SPEC_ATTACK_COST)
	{
		std::cout << SCAV_NO_MANA_MESSAGE << std::endl;
		return (0);
	}
	
	this->_MP -= SCAV_SPEC_ATTACK_COST;
	
	return (this->*func[rand(5)])(name);
}






unsigned int    ScavTrap::_specAttack1(std::string const &name) {

	std::cout << SCAV_SPEC_ATTACK1_MESSAGE(name) << std::endl;

    return (0);
}

unsigned int    ScavTrap::_specAttack2(std::string const &name) {

	std::cout << SCAV_SPEC_ATTACK2_MESSAGE(name) << std::endl;
	
    return (0);
}

unsigned int    ScavTrap::_specAttack3(std::string const &name) {

	std::cout << SCAV_SPEC_ATTACK3_MESSAGE(name) << std::endl;

    return (0);
}

unsigned int    ScavTrap::_specAttack4(std::string const &name) {

	std::cout << SCAV_SPEC_ATTACK4_MESSAGE(name) << std::endl;

    return (0);
}

unsigned int    ScavTrap::_specAttack5(std::string const &name) {

	std::cout << SCAV_SPEC_ATTACK5_MESSAGE(name) << std::endl;

    return (0);
}
