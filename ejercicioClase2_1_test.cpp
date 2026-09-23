/*
 * ejercicioClase2_1_test.cpp
 *
 *  Created on: 17 sept 2026
 *      Author: JESUS MARQUES
 */

/*
 * sumas_clase_test.cpp
 *
 *  Created on: 23 sept 2026
 *      Author: JESUS MARQUES
 */

int suma(int d1, int d2);
int suma();
int suma(int a);
int suma(float a, float b);

#include <gtest/gtest.h>

TEST(suma, test1){
	int d1=20;
	int d2=40;
	int res=60;

	ASSERT_EQ(res, suma(d1,d2));
}

TEST(suma, test2){
	int res=3;

	ASSERT_EQ(res, suma());
}

TEST(suma, test3){
	int a=5;
	int res=7;

	ASSERT_EQ(res, suma(a));
}

TEST(suma, test4){
	float a=4;
	float b=2;
	float res=6;

	ASSERT_EQ(res, suma(a,b));
}

