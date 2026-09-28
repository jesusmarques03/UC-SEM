/*
 * Vector_test.cpp
 *
 *  Created on: 28 sept 2026
 *      Author: JESUS MARQUES
 */

#include "Vector.h"
#include <gtest/gtest.h>

// Consructor 1

TEST(Vector, const1){
	Vector obj;
	ASSERT_FALSE(obj.set(0,1));
}

// Consructor 2

TEST(Vector, const2){
	Vector obj(2);
	ASSERT_TRUE(obj.set(0,1));
	int val;
	ASSERT_TRUE(obj.get(0,val));
	ASSERT_EQ(val,1);
	ASSERT_TRUE(obj.get(1,val));
	ASSERT_EQ(val,0);
}
