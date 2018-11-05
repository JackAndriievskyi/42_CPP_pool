// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 17:38:31 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 17:38:33 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class NinjaTrap : public ClapTrap{

public:
	NinjaTrap();
	NinjaTrap(std::string const &);
	~NinjaTrap(void);
	
	NinjaTrap(NinjaTrap const &);

	NinjaTrap&		operator=(NinjaTrap const &);
	
	void			ninjaShoebox(FragTrap &target) const;
	void			ninjaShoebox(ScavTrap &target) const;
};

#define NINJA_BOOT_MESSAGE "NINJA# Booting... *Windows for robots 8-bit melody sound*"

#define NINJA_BOOT_SERIAL_NUMBER_MESSAGE(srn) ("NINJA# Boot successfuly completed! SRN: " + srn)

#define NINJA_REPRODUCTION_MESSAGE "NINJA# Copying system... *Old router sound*"

#define NINJA_MIND_TRANSFER_MESSAGE(name) ("NINJA# Hacking and copying myself to " + name + "'s system!")
#define NINJA_AFTER_MIND_TRANSFER_MESSAGE(srn) ("NINJA# System hacked! I have one more SRN: " + srn)
#define NINJA_AFTER_MIND_TRANSFER_HAPPY_MESSAGE "NINJA# This robo has more HP, i'm happy!"
#define NINJA_AFTER_MIND_TRANSFER_SAD_MESSAGE "NINJA# This robo has less HP, i'm sad!"

#define NINJA_ATTACK_MESSAGE(name) ("NINJA# " + name + " attacks ")
#define NINJA_ATTACK_MELEE_MESSAGE(name) (name + ", ")
#define NINJA_ATTACK_RANGED_MESSAGE(name) (name + " at range, ")
#define NINJA_ATTACK_DMG_MESSAGE(dmg) ("causing " + dmg + " points of damage!")

#define NINJA_RECIEVE_DMG_MESSAGE(name) ("NINJA# " + name + ": Ohhhhh no, it hurts! -")
#define NINJA_RECIEVE_HEAL_MESSAGE(name) ("NINJA# " + name + ": Daaaaaaamn! So sweat healing! +")
#define NINJA_RECIEVE_MESSAGE(dmgorheal) (dmgorheal + " HEALTH POINTS")

#define NINJA_DEATH_MESSAGE(name) ("NINJA# " + name + ": I'm dying... Don't cry, baby... Say my mom...\n")

#define NINJA_BIP_BOP_MESSAGE(name) ("NINJA# " + name + ": *booooop* *baaaaaap* *biiiiiii...*")

#define NINJA_DEAD_MESSAGE "NINJA# *gnashing of metal sound*"

#define NINJA_MAX_HP 60
#define NINJA_MAX_MP 120
#define NINJA_MEELE_ATTACK_DMG 60
#define NINJA_RANGED_ATTACK_DMG 6
#define NINJA_ARMOR_REDUCTION 0
#define NINJA_LVL 1

#define NINJA_DEF_NAME "Dummy_Ninja"
#define NINJA_SERIAL_NBR_IDF "d5m10y18x00.NINJA"

#define NINJA_SPEC_ATTACK1_MESSAGE(name) (name + "! BEHOLD MY VERY SECRET NINJA TEHNIQUE!")
#define NINJA_SPEC_ATTACK2_MESSAGE(name) (name + "! BEHOLD MY VERY SEXY NINJA TEHNIQUE!")

#define NINJA_SPEC_ATTACK_COST 25

#define NINJA_NO_MANA_MESSAGE "NINJA# NOT ENOUPH MANA!!!"