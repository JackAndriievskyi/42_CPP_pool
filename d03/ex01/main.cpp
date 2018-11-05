// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 13:39:46 by yandriie          #+#    #+#             //
//   Updated: 2018/10/05 13:39:47 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void checkFrag();
void checkScav();

int				main(void)
{
	checkFrag();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	checkScav();
}

void checkFrag()
{
		FragTrap	dummy1;
		FragTrap	dummy2(dummy1);
		FragTrap	dummy3(dummy1);
		FragTrap	dummy4;
		FragTrap	dummy5(dummy4);
		FragTrap	std1("std1");
		FragTrap	std2("std2");
		FragTrap	std3("std3");


		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));

		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(100);

		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));

		dummy1.beRepaired(10);

		dummy2.takeDamage(std1.vaulthunter_dot_exe(dummy2.getName()));
		dummy2.takeDamage(std1.vaulthunter_dot_exe(dummy2.getName()));
		dummy2.takeDamage(std1.vaulthunter_dot_exe(dummy2.getName()));
		dummy2.takeDamage(std1.vaulthunter_dot_exe(dummy2.getName()));
		dummy2.takeDamage(std1.vaulthunter_dot_exe(dummy2.getName()));

		dummy4.takeDamage(std2.vaulthunter_dot_exe(dummy4.getName()));
		dummy4.takeDamage(std2.vaulthunter_dot_exe(dummy4.getName()));
		dummy4.takeDamage(std2.vaulthunter_dot_exe(dummy4.getName()));
		dummy4.takeDamage(std2.vaulthunter_dot_exe(dummy4.getName()));
		dummy4.takeDamage(std2.vaulthunter_dot_exe(dummy4.getName()));

		dummy5.takeDamage(std3.vaulthunter_dot_exe(dummy5.getName()));
		dummy5.takeDamage(std3.vaulthunter_dot_exe(dummy5.getName()));
		dummy5.takeDamage(std3.vaulthunter_dot_exe(dummy5.getName()));
		dummy5.takeDamage(std3.vaulthunter_dot_exe(dummy5.getName()));
		dummy5.takeDamage(std3.vaulthunter_dot_exe(dummy5.getName()));
}

void checkScav()
{
		ScavTrap	dummy1;
		ScavTrap	dummy2(dummy1);
		ScavTrap	dummy3(dummy1);
		ScavTrap	dummy4;
		ScavTrap	dummy5(dummy4);
		ScavTrap	std1("std1");
		ScavTrap	std2("std2");
		ScavTrap	std3("std3");


		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));

		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(10);
		dummy1.beRepaired(100);

		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.meleeAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));
		dummy1.takeDamage(std1.rangedAttack(dummy1.getName()));

		dummy1.beRepaired(10);

		dummy2.takeDamage(std1.challengeNewcomer(dummy2.getName()));
		dummy2.takeDamage(std1.challengeNewcomer(dummy2.getName()));
		dummy2.takeDamage(std1.challengeNewcomer(dummy2.getName()));
		dummy2.takeDamage(std1.challengeNewcomer(dummy2.getName()));
		dummy2.takeDamage(std1.challengeNewcomer(dummy2.getName()));

		dummy4.takeDamage(std2.challengeNewcomer(dummy4.getName()));
		dummy4.takeDamage(std2.challengeNewcomer(dummy4.getName()));
		dummy4.takeDamage(std2.challengeNewcomer(dummy4.getName()));
		dummy4.takeDamage(std2.challengeNewcomer(dummy4.getName()));
		dummy4.takeDamage(std2.challengeNewcomer(dummy4.getName()));

		dummy5.takeDamage(std3.challengeNewcomer(dummy5.getName()));
		dummy5.takeDamage(std3.challengeNewcomer(dummy5.getName()));
		dummy5.takeDamage(std3.challengeNewcomer(dummy5.getName()));
		dummy5.takeDamage(std3.challengeNewcomer(dummy5.getName()));
		dummy5.takeDamage(std3.challengeNewcomer(dummy5.getName()));
}
