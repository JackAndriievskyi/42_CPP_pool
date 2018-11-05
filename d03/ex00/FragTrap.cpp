// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 14:27:24 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 13:29:39 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "miniLib.hpp"
#include <iostream>

FragTrap::FragTrap(void) : _maxHP(FRAG_MAX_HP)
						 , _maxMP(FRAG_MAX_MP)
						 , _meleeDMG(FRAG_MEELE_ATTACK_DMG)
						 , _rangedDMG(FRAG_RANGED_ATTACK_DMG)
						 , _armorRED(FRAG_ARMOR_REDUCTION)
						 , _name(FRAG_DEF_NAME)
						 , _HP(_maxHP)
						 , _MP(_maxMP)
						 , _lvl(FRAG_LVL) {

    this->_serialNumber = serialNumberGen(FRAG_SERIAL_NBR_IDF);

	std::cout << FRAG_BOOT_MESSAGE << std::endl;
	std::cout << FRAG_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

FragTrap::FragTrap(std::string const &name) : _maxHP(FRAG_MAX_HP)
											, _maxMP(FRAG_MAX_MP)
											, _meleeDMG(FRAG_MEELE_ATTACK_DMG)
											, _rangedDMG(FRAG_RANGED_ATTACK_DMG)
											, _armorRED(FRAG_ARMOR_REDUCTION)
											, _name(name)
											, _HP(_maxHP)
											, _MP(_maxMP)
											, _lvl(FRAG_LVL) {

	this->_serialNumber = serialNumberGen(FRAG_SERIAL_NBR_IDF);

	std::cout << FRAG_BOOT_MESSAGE << std::endl;
	std::cout << FRAG_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

FragTrap::~FragTrap() {}

FragTrap::FragTrap(FragTrap const &other) : _maxHP(FRAG_MAX_HP)
										  , _maxMP(FRAG_MAX_MP)
										  , _meleeDMG(FRAG_MEELE_ATTACK_DMG)
										  , _rangedDMG(FRAG_RANGED_ATTACK_DMG)
										  , _armorRED(FRAG_ARMOR_REDUCTION) {

	this->_name = other._name;
	this->_HP = other._HP;
	this->_MP = other._MP;
	this->_lvl = other._lvl;
	this->_serialNumber = serialNumberGen(other._serialNumber);

	std::cout << FRAG_REPRODUCTION_MESSAGE << std::endl;
	std::cout << FRAG_BOOT_SERIAL_NUMBER_MESSAGE(this->_serialNumber) << std::endl;
}

FragTrap&		FragTrap::operator=(FragTrap const &other) {

	if (this != &other)
	{
		std::cout << other._name << FRAG_MIND_TRANSFER_MESSAGE(this->_name)
				  << std::endl;

		std::cout << FRAG_AFTER_MIND_TRANSFER_MESSAGE(this->_serialNumber)
				  << std::endl;

		std::cout << ((this->_HP > other._HP)
					  ? FRAG_AFTER_MIND_TRANSFER_HAPPY_MESSAGE
					  : FRAG_AFTER_MIND_TRANSFER_SAD_MESSAGE) << std::endl;
	}
	this->_name = other._name;
	return *this;
}






unsigned int	FragTrap::vaulthunter_dot_exe(std::string const &name) {

	unsigned int	(FragTrap::*func[])(std::string const &) = {
		&FragTrap::_specAttack1,
		&FragTrap::_specAttack2,
		&FragTrap::_specAttack3,
		&FragTrap::_specAttack4,
		&FragTrap::_specAttack5
	};

	if (this->_MP < FRAG_SPEC_ATTACK_COST)
	{
		std::cout << FRAG_NO_MANA_MESSAGE << std::endl;
		return (0);
	}
	
	this->_MP -= FRAG_SPEC_ATTACK_COST;
	
	return (this->*func[rand(5)])(name);
}

unsigned int	FragTrap::rangedAttack(std::string const &name) const {

	std::cout << FRAG_ATTACK_MESSAGE(this->_name)
			  << FRAG_ATTACK_RANGED_MESSAGE(name)
			  << FRAG_ATTACK_DMG_MESSAGE(toString(this->_rangedDMG))
			  << std::endl;

	return this->_rangedDMG;
}

unsigned int	FragTrap::meleeAttack(std::string const &name) const {

	std::cout << FRAG_ATTACK_MESSAGE(this->_name)
              << FRAG_ATTACK_MELEE_MESSAGE(name)
              << FRAG_ATTACK_DMG_MESSAGE(toString(this->_meleeDMG))
              << std::endl;

    return this->_meleeDMG;
}

void			FragTrap::takeDamage(unsigned int dmg) {

	if (this->_HP == 0)
		std::cout << FRAG_DEAD_MESSAGE << std::endl;
	else
	{
		if (dmg < this->_armorRED)
			dmg = this->_armorRED;
		else if (this->_HP >= dmg - this->_armorRED)
			this->_HP -= dmg - this->_armorRED;
		else
			this->_HP = 0;

		std::cout << FRAG_RECIEVE_DMG_MESSAGE(this->_name)
				  << FRAG_RECIEVE_MESSAGE(toString(dmg - this->_armorRED))
				  << std::endl;

		if (this->_HP == 0)
			std::cout << FRAG_DEATH_MESSAGE(this->_name)
					  << FRAG_BIP_BOP_MESSAGE(this->_name)
					  << std::endl;
	}
}

void			FragTrap::beRepaired(unsigned int heal) {

	if (this->_HP == 0)
		std::cout << FRAG_DEAD_MESSAGE << std::endl;
	else if (this->_HP != FRAG_MAX_HP)
		{
			if (this->_HP + heal <= FRAG_MAX_HP)
				this->_HP += heal;
			else
				this->_HP = FRAG_MAX_HP;

			std::cout << FRAG_RECIEVE_HEAL_MESSAGE(this->_name)
					  << FRAG_RECIEVE_MESSAGE(toString(heal))
					  << std::endl;
		}
}





unsigned int    FragTrap::_specAttack1(std::string const &name) {

	std::cout << FRAG_ATTACK_MESSAGE(this->_name)
              << FRAG_SPEC_ATTACK1_MESSAGE(name)
              << FRAG_ATTACK_DMG_MESSAGE(toString(this->_meleeDMG * 2))
              << std::endl;

    return (this->_meleeDMG * 2 - this->_armorRED);
}

unsigned int    FragTrap::_specAttack2(std::string const &name) {

	std::cout << FRAG_ATTACK_MESSAGE(this->_name)
              << FRAG_SPEC_ATTACK2_MESSAGE(name)
              << FRAG_ATTACK_DMG_MESSAGE(toString(0))
              << std::endl;
	
    return (0);
}

unsigned int    FragTrap::_specAttack3(std::string const &name) {

	std::cout << FRAG_ATTACK_MESSAGE(this->_name)
              << FRAG_SPEC_ATTACK3_MESSAGE(name)
              << FRAG_ATTACK_DMG_MESSAGE(toString(this->_meleeDMG))
              << std::endl;

	this->takeDamage(this->_meleeDMG);

    return this->_meleeDMG;
}

unsigned int    FragTrap::_specAttack4(std::string const &name) {

	std::cout << FRAG_ATTACK_MESSAGE(this->_name)
              << FRAG_SPEC_ATTACK4_MESSAGE(name)
              << FRAG_ATTACK_DMG_MESSAGE(toString(FRAG_SPEC_ATTACK4_DMG))
              << std::endl;

    return FRAG_SPEC_ATTACK4_DMG;
}

unsigned int    FragTrap::_specAttack5(std::string const &name) {

	std::cout << FRAG_ATTACK_MESSAGE(this->_name)
              << FRAG_SPEC_ATTACK5_MESSAGE(name)
              << FRAG_ATTACK_DMG_MESSAGE(toString(FRAG_SPEC_ATTACK5_DMG))
              << std::endl;

    return FRAG_SPEC_ATTACK5_DMG;
}





std::string const & FragTrap::getName() const {
    return (this->_name);
}