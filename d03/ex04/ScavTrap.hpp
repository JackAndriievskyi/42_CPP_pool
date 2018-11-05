// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/04 14:27:12 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 13:01:18 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap{

public:
	ScavTrap();
	ScavTrap(std::string const &);
	~ScavTrap(void);
	
	ScavTrap(ScavTrap const &);

	ScavTrap&		operator=(ScavTrap const &);
	
	unsigned int	challengeNewcomer(std::string const &);
	
private:

	unsigned int	_specAttack1(std::string const &);
	unsigned int	_specAttack2(std::string const &);
	unsigned int	_specAttack3(std::string const &);
	unsigned int	_specAttack4(std::string const &);
	unsigned int	_specAttack5(std::string const &);
};

#define SCAV_BOOT_MESSAGE "SCAV# Booting... *Windows for robots 8-bit melody sound*"

#define SCAV_BOOT_SERIAL_NUMBER_MESSAGE(srn) ("SCAV# Boot successfuly completed! SRN: " + srn)

#define SCAV_REPRODUCTION_MESSAGE "SCAV# Copying system... *Old router sound*"

#define SCAV_MIND_TRANSFER_MESSAGE(name) ("SCAV# Hacking and copying myself to " + name + "'s system!")
#define SCAV_AFTER_MIND_TRANSFER_MESSAGE(srn) ("SCAV# System hacked! I have one more SRN: " + srn)
#define SCAV_AFTER_MIND_TRANSFER_HAPPY_MESSAGE "SCAV# This robo has more HP, i'm happy!"
#define SCAV_AFTER_MIND_TRANSFER_SAD_MESSAGE "SCAV# This robo has less HP, i'm sad!"

#define SCAV_ATTACK_MESSAGE(name) ("SCAV# " + name + " attacks ")
#define SCAV_ATTACK_MELEE_MESSAGE(name) (name + ", ")
#define SCAV_ATTACK_RANGED_MESSAGE(name) (name + " at range, ")
#define SCAV_ATTACK_DMG_MESSAGE(dmg) ("causing " + dmg + " points of damage!")

#define SCAV_RECIEVE_DMG_MESSAGE(name) ("SCAV# " + name + ": Ohhhhh no, it hurts! -")
#define SCAV_RECIEVE_HEAL_MESSAGE(name) ("SCAV# " + name + ": Daaaaaaamn! So sweat healing! +")
#define SCAV_RECIEVE_MESSAGE(dmgorheal) (dmgorheal + " HEALTH POINTS")

#define SCAV_DEATH_MESSAGE(name) ("SCAV# " + name + ": I'm dying... Don't cry, baby... Say my mom...\n")

#define SCAV_BIP_BOP_MESSAGE(name) ("SCAV# " + name + ": *booooop* *baaaaaap* *biiiiiii...*")

#define SCAV_DEAD_MESSAGE "SCAV# *gnashing of metal sound*"

#define SCAV_MAX_HP 100
#define SCAV_MAX_MP 50
#define SCAV_MEELE_ATTACK_DMG 20
#define SCAV_RANGED_ATTACK_DMG 15
#define SCAV_ARMOR_REDUCTION 3
#define SCAV_LVL 1

#define SCAV_DEF_NAME "Dummy_scav"
#define SCAV_SERIAL_NBR_IDF "d5m10y18x00.SCAV"

#define SCAV_SPEC_ATTACK1_MESSAGE(name) (name + "! TONGUE TO NOSE CHALLENGE! DO IT!")
#define SCAV_SPEC_ATTACK2_MESSAGE(name) (name + "! TONGUE TO ELBOW CHALLENGE! DO IT!")
#define SCAV_SPEC_ATTACK3_MESSAGE(name) (name + "! TONGUE TO FOREHEAD CHALLENGE! DO IT!")
#define SCAV_SPEC_ATTACK4_MESSAGE(name) (name + "! TONGUE TO NAPE CHALLENGE! DO IT!")
#define SCAV_SPEC_ATTACK5_MESSAGE(name) (name + "! TONGUE TO CHINA CHALLENGE! DO IT!")

#define SCAV_SPEC_ATTACK_COST 25

#define SCAV_NO_MANA_MESSAGE "SCAV# NOT ENOUPH MANA!!!"
