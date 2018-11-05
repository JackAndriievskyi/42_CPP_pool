// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 15:54:05 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 15:54:06 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include "miniLib.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _maxHP(CLAP_MAX_HP)
						 , _maxMP(CLAP_MAX_MP)
						 , _meleeDMG(CLAP_MEELE_ATTACK_DMG)
						 , _rangedDMG(CLAP_RANGED_ATTACK_DMG)
						 , _armorRED(CLAP_ARMOR_REDUCTION)
						 , _name(CLAP_DEF_NAME)
						 , _HP(_maxHP)
						 , _MP(_maxMP)
						 , _lvl(CLAP_LVL) {

    this->_serialNumber = serialNumberGen(CLAP_SERIAL_NBR_IDF);

	std::cout << CLAP_BOOT_MESSAGE << std::endl;
	std::cout << CLAP_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _maxHP(CLAP_MAX_HP)
											, _maxMP(CLAP_MAX_MP)
											, _meleeDMG(CLAP_MEELE_ATTACK_DMG)
											, _rangedDMG(CLAP_RANGED_ATTACK_DMG)
											, _armorRED(CLAP_ARMOR_REDUCTION)
											, _name(name)
											, _HP(_maxHP)
											, _MP(_maxMP)
											, _lvl(CLAP_LVL) {

	this->_serialNumber = serialNumberGen(CLAP_SERIAL_NBR_IDF);

	std::cout << CLAP_BOOT_MESSAGE << std::endl;
	std::cout << CLAP_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ClapTrap::ClapTrap(std::string const &name, 
		unsigned int HP,
		unsigned int MP,
		unsigned int meleeDMG,
		unsigned int rangedDMG,
		unsigned int armorRED,
		unsigned int lvl)	: _maxHP(HP)
							, _maxMP(MP)
							, _meleeDMG(meleeDMG)
							, _rangedDMG(rangedDMG)
							, _armorRED(armorRED)
							, _name(name)
							, _HP(HP)
							, _MP(MP)
							, _lvl(lvl) {

	this->_serialNumber = serialNumberGen(CLAP_SERIAL_NBR_IDF);
	
	std::cout << CLAP_BOOT_MESSAGE << std::endl;
	std::cout << CLAP_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap(ClapTrap const &other) : _maxHP(CLAP_MAX_HP)
										  , _maxMP(CLAP_MAX_MP)
										  , _meleeDMG(CLAP_MEELE_ATTACK_DMG)
										  , _rangedDMG(CLAP_RANGED_ATTACK_DMG)
										  , _armorRED(CLAP_ARMOR_REDUCTION) {

	this->_name = other._name;
	this->_HP = other._HP;
	this->_MP = other._MP;
	this->_lvl = other._lvl;
	this->_serialNumber = serialNumberGen(other._serialNumber);

	std::cout << CLAP_REPRODUCTION_MESSAGE << std::endl;
	std::cout << CLAP_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

ClapTrap&		ClapTrap::operator=(ClapTrap const &other) {

	if (this != &other)
	{
		std::cout << other._name << CLAP_MIND_TRANSFER_MESSAGE(this->_name)
				  << std::endl;

		std::cout << CLAP_AFTER_MIND_TRANSFER_MESSAGE(this->_serialNumber)
				  << std::endl;

		std::cout << ((this->_HP > other._HP)
					  ? CLAP_AFTER_MIND_TRANSFER_HAPPY_MESSAGE
					  : CLAP_AFTER_MIND_TRANSFER_SAD_MESSAGE) << std::endl;
	}
	this->_name = other._name;
	return *this;
}






unsigned int	ClapTrap::rangedAttack(std::string const &name) const {

	std::cout << CLAP_ATTACK_MESSAGE(this->_name)
			  << CLAP_ATTACK_RANGED_MESSAGE(name)
			  << CLAP_ATTACK_DMG_MESSAGE(toString(this->_rangedDMG))
			  << std::endl;

	return this->_rangedDMG;
}

unsigned int	ClapTrap::meleeAttack(std::string const &name) const {

	std::cout << CLAP_ATTACK_MESSAGE(this->_name)
              << CLAP_ATTACK_MELEE_MESSAGE(name)
              << CLAP_ATTACK_DMG_MESSAGE(toString(this->_meleeDMG))
              << std::endl;

    return this->_meleeDMG;
}

void			ClapTrap::takeDamage(unsigned int dmg) {

	if (this->_HP == 0)
		std::cout << CLAP_DEAD_MESSAGE << std::endl;
	else
	{
		if (dmg < this->_armorRED)
			dmg = this->_armorRED;
		else if (this->_HP >= dmg - this->_armorRED)
			this->_HP -= dmg - this->_armorRED;
		else
			this->_HP = 0;

		std::cout << CLAP_RECIEVE_DMG_MESSAGE(this->_name)
				  << CLAP_RECIEVE_MESSAGE(toString(dmg - this->_armorRED))
				  << std::endl;

		if (this->_HP == 0)
			std::cout << CLAP_DEATH_MESSAGE(this->_name)
					  << CLAP_BIP_BOP_MESSAGE(this->_name)
					  << std::endl;
	}
}

void			ClapTrap::beRepaired(unsigned int heal) {

	if (this->_HP == 0)
		std::cout << CLAP_DEAD_MESSAGE << std::endl;
	else if (this->_HP != _maxHP)
		{
			if (this->_HP + heal <= _maxHP)
				this->_HP += heal;
			else
				this->_HP = _maxHP;

			std::cout << CLAP_RECIEVE_HEAL_MESSAGE(this->_name)
					  << CLAP_RECIEVE_MESSAGE(toString(heal))
					  << std::endl;
		}
}





std::string const & ClapTrap::getName() const {
    return (this->_name);
}