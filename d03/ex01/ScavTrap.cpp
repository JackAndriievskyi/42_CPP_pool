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

ScavTrap::ScavTrap(void) : _maxHP(SCAV_MAX_HP)
						 , _maxMP(SCAV_MAX_MP)
						 , _meleeDMG(SCAV_MEELE_ATTACK_DMG)
						 , _rangedDMG(SCAV_RANGED_ATTACK_DMG)
						 , _armorRED(SCAV_ARMOR_REDUCTION)
						 , _name(SCAV_DEF_NAME)
						 , _HP(_maxHP)
						 , _MP(_maxMP)
						 , _lvl(SCAV_LVL) {

    this->_serialNumber = serialNumberGen(SCAV_SERIAL_NBR_IDF);

	std::cout << SCAV_BOOT_MESSAGE << std::endl;
	std::cout << SCAV_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : _maxHP(SCAV_MAX_HP)
											, _maxMP(SCAV_MAX_MP)
											, _meleeDMG(SCAV_MEELE_ATTACK_DMG)
											, _rangedDMG(SCAV_RANGED_ATTACK_DMG)
											, _armorRED(SCAV_ARMOR_REDUCTION)
											, _name(name)
											, _HP(_maxHP)
											, _MP(_maxMP)
											, _lvl(SCAV_LVL) {

	this->_serialNumber = serialNumberGen(SCAV_SERIAL_NBR_IDF);

	std::cout << SCAV_BOOT_MESSAGE << std::endl;
	std::cout << SCAV_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ScavTrap::~ScavTrap() {}

ScavTrap::ScavTrap(ScavTrap const &other) : _maxHP(SCAV_MAX_HP)
										  , _maxMP(SCAV_MAX_MP)
										  , _meleeDMG(SCAV_MEELE_ATTACK_DMG)
										  , _rangedDMG(SCAV_RANGED_ATTACK_DMG)
										  , _armorRED(SCAV_ARMOR_REDUCTION) {

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

unsigned int	ScavTrap::rangedAttack(std::string const &name) const {

	std::cout << SCAV_ATTACK_MESSAGE(this->_name)
			  << SCAV_ATTACK_RANGED_MESSAGE(name)
			  << SCAV_ATTACK_DMG_MESSAGE(toString(this->_rangedDMG))
			  << std::endl;

	return this->_rangedDMG;
}

unsigned int	ScavTrap::meleeAttack(std::string const &name) const {

	std::cout << SCAV_ATTACK_MESSAGE(this->_name)
              << SCAV_ATTACK_MELEE_MESSAGE(name)
              << SCAV_ATTACK_DMG_MESSAGE(toString(this->_meleeDMG))
              << std::endl;

    return this->_meleeDMG;
}

void			ScavTrap::takeDamage(unsigned int dmg) {

	if (this->_HP == 0)
		std::cout << SCAV_DEAD_MESSAGE << std::endl;
	else
	{
		if (dmg < this->_armorRED)
			dmg = this->_armorRED;
		else if (this->_HP >= dmg - this->_armorRED)
			this->_HP -= dmg - this->_armorRED;
		else
			this->_HP = 0;

		std::cout << SCAV_RECIEVE_DMG_MESSAGE(this->_name)
				  << SCAV_RECIEVE_MESSAGE(toString(dmg - this->_armorRED))
				  << std::endl;

		if (this->_HP == 0)
			std::cout << SCAV_DEATH_MESSAGE(this->_name)
					  << SCAV_BIP_BOP_MESSAGE(this->_name)
					  << std::endl;
	}
}

void			ScavTrap::beRepaired(unsigned int heal) {

	if (this->_HP == 0)
		std::cout << SCAV_DEAD_MESSAGE << std::endl;
	else if (this->_HP != SCAV_MAX_HP)
		{
			if (this->_HP + heal <= SCAV_MAX_HP)
				this->_HP += heal;
			else
				this->_HP = SCAV_MAX_HP;

			std::cout << SCAV_RECIEVE_HEAL_MESSAGE(this->_name)
					  << SCAV_RECIEVE_MESSAGE(toString(heal))
					  << std::endl;
		}
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





std::string const & ScavTrap::getName() const {
    return (this->_name);
}