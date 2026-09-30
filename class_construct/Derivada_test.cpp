/*
 * Derivada_test.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: JESUS MARQUES
 */

#include "gtest/gtest.h"
#include "Derivada.h"

TEST(Derivada, constructor) {
	Derivada D(6, 33);
	Derivada a(4);
	Derivada c;

	int va, vb;
	D.get(va, vb);

	ASSERT_EQ(va,6);
	ASSERT_EQ(vb,33);
}

TEST(Derivada, poli) {
	Base d1(3);

	ASSERT_EQ(d1.suma(), 3);

	Derivada d2(3, 4);
	ASSERT_EQ(d2.suma(), 107);

	Base *p;
	p = &d2;
	ASSERT_EQ(p->suma(), 107);

	ASSERT_EQ(p->global(), 1);
	ASSERT_EQ(d1.global(), 2);
	ASSERT_EQ(d2.global(), 3);
}
