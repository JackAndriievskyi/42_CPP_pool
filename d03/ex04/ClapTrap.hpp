// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 15:54:10 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 15:54:11 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include <string>

class ClapTrap {

public:
	ClapTrap();
	ClapTrap(std::string const &);
	ClapTrap(std::string const &, 
		unsigned int,
		unsigned int,
		unsigned int,
		unsigned int,
		unsigned int,
		unsigned int);
	~ClapTrap(void);
	
	ClapTrap(ClapTrap const &);

	ClapTrap&		operator=(ClapTrap const &);
	
	unsigned int	rangedAttack(std::string const &) const;
	unsigned int	meleeAttack(std::string const &) const;
	void			takeDamage(unsigned int);
	void			beRepaired(unsigned int);

	std::string const &	getName() const;

protected:

	unsigned int const	_maxHP;
	unsigned int const	_maxMP;
	unsigned int const	_meleeDMG;
	unsigned int const	_rangedDMG;
	unsigned int const	_armorRED;

	std::string		_name;
	unsigned int	_HP;
	unsigned int	_MP;
	unsigned int	_lvl;

	std::string		_serialNumber;
};

#define CLAP_BOOT_MESSAGE "CLAP# Booting... *Windows for robots 8-bit melody sound*"

#define CLAP_BOOT_SERIAL_NUMBER_MESSAGE(srn) ("CLAP# Boot successfuly completed! SRN: " + srn)

#define CLAP_REPRODUCTION_MESSAGE "CLAP# Copying system... *Old router sound*"

#define CLAP_MIND_TRANSFER_MESSAGE(name) ("CLAP# Hacking and copying myself to " + name + "'s system!")
#define CLAP_AFTER_MIND_TRANSFER_MESSAGE(srn) ("CLAP# System hacked! I have one more SRN: " + srn)
#define CLAP_AFTER_MIND_TRANSFER_HAPPY_MESSAGE "CLAP# This robo has more HP, i'm happy!"
#define CLAP_AFTER_MIND_TRANSFER_SAD_MESSAGE "CLAP# This robo has less HP, i'm sad!"

#define CLAP_ATTACK_MESSAGE(name) ("CLAP# " + name + " attacks ")
#define CLAP_ATTACK_MELEE_MESSAGE(name) (name + ", ")
#define CLAP_ATTACK_RANGED_MESSAGE(name) (name + " at range, ")
#define CLAP_ATTACK_DMG_MESSAGE(dmg) ("causing " + dmg + " points of damage!")

#define CLAP_RECIEVE_DMG_MESSAGE(name) ("CLAP# " + name + ": Ohhhhh no, it hurts! -")
#define CLAP_RECIEVE_HEAL_MESSAGE(name) ("CLAP# " + name + ": Daaaaaaamn! So sweat healing! +")
#define CLAP_RECIEVE_MESSAGE(dmgorheal) (dmgorheal + " HEALTH POINTS")

#define CLAP_DEATH_MESSAGE(name) ("CLAP# " + name + ": I'm dying... Don't cry, baby... Say my mom...\n")

#define CLAP_BIP_BOP_MESSAGE(name) ("CLAP# " + name + ": *booooop* *baaaaaap* *biiiiiii...*")

#define CLAP_DEAD_MESSAGE "CLAP# *gnashing of metal sound*"

#define CLAP_MAX_HP 0
#define CLAP_MAX_MP 0
#define CLAP_MEELE_ATTACK_DMG 0
#define CLAP_RANGED_ATTACK_DMG 0
#define CLAP_ARMOR_REDUCTION 0
#define CLAP_LVL 0

#define CLAP_DEF_NAME "Dummy_CLAP"
#define CLAP_SERIAL_NBR_IDF "d5m10y18x00.CLAP"

#define CLAP_SPEC_ATTACK1_MESSAGE(name) (name + " with CritHit, ")
#define CLAP_SPEC_ATTACK2_MESSAGE(name) (name + " and misses, ")
#define CLAP_SPEC_ATTACK3_MESSAGE(name) (name + " and takes ricochet, ")
#define CLAP_SPEC_ATTACK4_MESSAGE(name) (name + " with MEGA SUPER POOPER BLUST, ")
#define CLAP_SPEC_ATTACK5_MESSAGE(name) (name + " with ONE PUNCH, ")

#define CLAP_SPEC_ATTACK4_DMG 50
#define CLAP_SPEC_ATTACK5_DMG 999

#define CLAP_SPEC_ATTACK_COST 25

#define CLAP_NO_MANA_MESSAGE "CLAP# NOT ENOUPH MANA!!!"