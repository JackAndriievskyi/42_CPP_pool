// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
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

class FragTrap : public ClapTrap{

public:
	FragTrap();
	FragTrap(std::string const &);
	~FragTrap(void);
	
	FragTrap(FragTrap const &);

	FragTrap&		operator=(FragTrap const &);
	
	unsigned int	vaulthunter_dot_exe(std::string const &);
	
private:

	unsigned int	_specAttack1(std::string const &);
	unsigned int	_specAttack2(std::string const &);
	unsigned int	_specAttack3(std::string const &);
	unsigned int	_specAttack4(std::string const &);
	unsigned int	_specAttack5(std::string const &);
};

#define FRAG_BOOT_MESSAGE "FRAG# Booting... *Windows for robots 8-bit melody sound*"

#define FRAG_BOOT_SERIAL_NUMBER_MESSAGE(srn) ("FRAG# Boot successfuly completed! SRN: " + srn)

#define FRAG_REPRODUCTION_MESSAGE "FRAG# Copying system... *Old router sound*"

#define FRAG_MIND_TRANSFER_MESSAGE(name) ("FRAG# Hacking and copying myself to " + name + "'s system!")
#define FRAG_AFTER_MIND_TRANSFER_MESSAGE(srn) ("FRAG# System hacked! I have one more SRN: " + srn)
#define FRAG_AFTER_MIND_TRANSFER_HAPPY_MESSAGE "FRAG# This robo has more HP, i'm happy!"
#define FRAG_AFTER_MIND_TRANSFER_SAD_MESSAGE "FRAG# This robo has less HP, i'm sad!"

#define FRAG_ATTACK_MESSAGE(name) ("FRAG# " + name + " attacks ")
#define FRAG_ATTACK_MELEE_MESSAGE(name) (name + ", ")
#define FRAG_ATTACK_RANGED_MESSAGE(name) (name + " at range, ")
#define FRAG_ATTACK_DMG_MESSAGE(dmg) ("causing " + dmg + " points of damage!")

#define FRAG_RECIEVE_DMG_MESSAGE(name) ("FRAG# " + name + ": Ohhhhh no, it hurts! -")
#define FRAG_RECIEVE_HEAL_MESSAGE(name) ("FRAG# " + name + ": Daaaaaaamn! So sweat healing! +")
#define FRAG_RECIEVE_MESSAGE(dmgorheal) (dmgorheal + " HEALTH POINTS")

#define FRAG_DEATH_MESSAGE(name) ("FRAG# " + name + ": I'm dying... Don't cry, baby... Say my mom...\n")

#define FRAG_BIP_BOP_MESSAGE(name) ("FRAG# " + name + ": *booooop* *baaaaaap* *biiiiiii...*")

#define FRAG_DEAD_MESSAGE "FRAG# *gnashing of metal sound*"

#define FRAG_MAX_HP 100
#define FRAG_MAX_MP 100
#define FRAG_MEELE_ATTACK_DMG 10
#define FRAG_RANGED_ATTACK_DMG 20
#define FRAG_ARMOR_REDUCTION 6
#define FRAG_LVL 1

#define FRAG_DEF_NAME "Dummy_frag"
#define FRAG_SERIAL_NBR_IDF "d5m10y18x00.FRAG"

#define FRAG_SPEC_ATTACK1_MESSAGE(name) (name + " with CritHit, ")
#define FRAG_SPEC_ATTACK2_MESSAGE(name) (name + " and misses, ")
#define FRAG_SPEC_ATTACK3_MESSAGE(name) (name + " and takes ricochet, ")
#define FRAG_SPEC_ATTACK4_MESSAGE(name) (name + " with MEGA SUPER POOPER BLUST, ")
#define FRAG_SPEC_ATTACK5_MESSAGE(name) (name + " with ONE PUNCH, ")

#define FRAG_SPEC_ATTACK4_DMG 50
#define FRAG_SPEC_ATTACK5_DMG 999

#define FRAG_SPEC_ATTACK_COST 25

#define FRAG_NO_MANA_MESSAGE "FRAG# NOT ENOUPH MANA!!!"
