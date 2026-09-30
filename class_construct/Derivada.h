/*
 * Derivada.h
 *
 *  Created on: 30 sept 2026
 *      Author: JESUS MARQUES
 */

#ifndef DERIVADA_H_
#define DERIVADA_H_

#include "Base.h"

class Derivada: public Base {
public:
	using Base::Base;
	Derivada(int a, int b);
	virtual ~Derivada();
	int suma();
};

#endif /* DERIVADA_H_ */
