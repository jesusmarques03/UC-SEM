/*
 * ejercicioClase2_1_test.cpp
 *
 *  Created on: 17 sept 2026
 *      Author: JESUS MARQUES
 */

int suma(int d1, int d2);

#include <gtest/gtest.h>

TEST(suma, test1){
	int d1=20;
	int d2=40;
	int res=20;

	ASSERT_EQ(res, suma(d1,d2));
}
