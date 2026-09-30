/*
 * Derivada.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: JESUS MARQUES
 */

#include "Derivada.h"
#include <iostream>

Derivada::Derivada(int a, int b) {
	Base::a=a;
	Base::b=b;
	std::cout << "En constructor Derivada::Derivada(int a, int b)" << std::endl;
}

Derivada::~Derivada() {
	std::cout << "En destructor Derivada::~Derivada()" << std::endl;
}

