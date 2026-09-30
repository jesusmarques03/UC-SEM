/*
 * Base.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: JESUS MARQUES
 */

#include "Base.h"
#include <iostream>

int Base::comun = 0;

int Base::global() {
	comun++;
	return comun;
}

Base::Base() {
	std::cout << "En constructor Base::Base()" << std::endl;
	a = 0;
	b = 0;
}

Base::~Base() {
	std::cout << "En destructor Base::~Base()" << std::endl;
}

Base::Base(const Base &other) {
	std::cout << "En constructor Base::Base(const Base &other)" << std::endl;
	a = other.a;
	b = other.b;
}

void Base::get(int &va, int &vb) {
	va = a;
	vb = b;
}

int Base::suma() {
	return a+b;
}
