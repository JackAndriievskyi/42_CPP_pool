// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 18:15:39 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 18:15:41 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap : public FragTrap
				, public NinjaTrap
{

public:
	SuperTrap();
	SuperTrap(std::string const &);
	~SuperTrap(void);
	
	SuperTrap(SuperTrap const &);

	SuperTrap&		operator=(SuperTrap const &);
};

#define SUPER_BOOT_MESSAGE "SUPER# Booting... *Windows for robots 8-bit melody sound*"

#define SUPER_BOOT_SERIAL_NUMBER_MESSAGE(srn) ("SUPER# Boot successfuly completed! SRN: " + srn)

#define SUPER_REPRODUCTION_MESSAGE "SUPER# Copying system... *Old router sound*"

#define SUPER_MIND_TRANSFER_MESSAGE(name) ("SUPER# Hacking and copying myself to " + name + "'s system!")
#define SUPER_AFTER_MIND_TRANSFER_MESSAGE(srn) ("SUPER# System hacked! I have one more SRN: " + srn)
#define SUPER_AFTER_MIND_TRANSFER_HAPPY_MESSAGE "SUPER# This robo has more HP, i'm happy!"
#define SUPER_AFTER_MIND_TRANSFER_SAD_MESSAGE "SUPER# This robo has less HP, i'm sad!"

#define SUPER_ATTACK_MESSAGE(name) ("SUPER# " + name + " attacks ")
#define SUPER_ATTACK_MELEE_MESSAGE(name) (name + ", ")
#define SUPER_ATTACK_RANGED_MESSAGE(name) (name + " at range, ")
#define SUPER_ATTACK_DMG_MESSAGE(dmg) ("causing " + dmg + " points of damage!")

#define SUPER_RECIEVE_DMG_MESSAGE(name) ("SUPER# " + name + ": Ohhhhh no, it hurts! -")
#define SUPER_RECIEVE_HEAL_MESSAGE(name) ("SUPER# " + name + ": Daaaaaaamn! So sweat healing! +")
#define SUPER_RECIEVE_MESSAGE(dmgorheal) (dmgorheal + " HEALTH POINTS")

#define SUPER_DEATH_MESSAGE(name) ("SUPER# " + name + ": I'm dying... Don't cry, baby... Say my mom...\n")

#define SUPER_BIP_BOP_MESSAGE(name) ("SUPER# " + name + ": *booooop* *baaaaaap* *biiiiiii...*")

#define SUPER_DEAD_MESSAGE "SUPER# *gnashing of metal sound*"

#define SUPER_MAX_HP FRAG_MAX_HP
#define SUPER_MAX_MP NINJA_MAX_MP
#define SUPER_MEELE_ATTACK_DMG NINJA_MEELE_ATTACK_DMG
#define SUPER_RANGED_ATTACK_DMG FRAG_RANGED_ATTACK_DMG
#define SUPER_ARMOR_REDUCTION FRAG_ARMOR_REDUCTION
#define SUPER_LVL 1

#define SUPER_DEF_NAME "Dummy_Super"
#define SUPER_SERIAL_NBR_IDF "d5m10y18x00.SUPER"

#define SUPER_SPEC_ATTACK1_MESSAGE(name) (name + "! BEHOLD MY VERY SECRET Super TEHNIQUE!")
#define SUPER_SPEC_ATTACK2_MESSAGE(name) (name + "! BEHOLD MY VERY SEXY Super TEHNIQUE!")

#define SUPER_SPEC_ATTACK_COST 25

#define SUPER_NO_MANA_MESSAGE "SUPER# NOT ENOUPH MANA!!!"