// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yandriie <yandriie@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/03 12:54:47 by yandriie          #+#    #+#             //
//   Updated: 2018/10/03 12:54:48 by yandriie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "Pony.hpp"
#include <iostream>
#include <string>

void whatDoesThePonySay(Pony* thisPony) {
    if (*(bool *)thisPony == true)
        std::cout << "What does the pony say? Pony says: \"Fuck you, why i'm still alive?\" This pony is realy wierd one." << std::endl;
    if (*(bool *)thisPony == false)
        std::cout << "What does the pony say? Pony says nothing. Dead ponies not talking, you silly! Ahahaha" << std::endl;
}

Pony* ponyOnTheHeap() {
    Pony* Fluttershy = new Pony("Fluttershy");
    whatDoesThePonySay(Fluttershy);
    return Fluttershy;
}

Pony* ponyOnTheStack() {
    Pony Rarity("Rarity");
    Pony *RarityPtr = &Rarity;
    whatDoesThePonySay(RarityPtr);
    return RarityPtr;
}

int main() {
	Pony* SchrodingersPonyPtr;
	SchrodingersPonyPtr = ponyOnTheHeap();
	whatDoesThePonySay(SchrodingersPonyPtr);
	delete SchrodingersPonyPtr;
	whatDoesThePonySay(SchrodingersPonyPtr);
	SchrodingersPonyPtr = ponyOnTheStack();
	whatDoesThePonySay(SchrodingersPonyPtr);
	return (0);
}
