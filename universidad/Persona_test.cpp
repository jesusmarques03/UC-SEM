/*
 * Persona_test.cpp
 *
 *  Created on: 5 oct 2026
 *      Author: JESUS MARQUES
 */

#include "Persona.h"
#include <gtest/gtest.h>

TEST(Persona, constructor) {
	Persona p1("123456789A","Jesus","Marques Casanueva");
	Persona p2;

	// Solo tiene que haber 1 persona en la lista
	ASSERT_EQ(p2.nPersonas(),1);
	// Comprobar que su ID es correcto
	ASSERT_TRUE(p2.isOnList("123456789A"));
	// Comprobar que su ID es falso
	ASSERT_FALSE(p2.isOnList("000000000B"));
}

// Test destructor
TEST(Persona, destructor) {
	Persona p1("123456789A","Jesus","Marques Casanueva");
	Persona p2;
	{
		Persona p3("000000000B", "Mario", "Garcia Gonzalez");
		// Solo tiene que haber dos personas en la lista
		ASSERT_EQ(p2.nPersonas(),2);
		// Comprobar que su ID es correcto
		ASSERT_TRUE(p2.isOnList("000000000B"));
	}

	// Solo tiene que haber 1 persona en la lista
	ASSERT_EQ(p2.nPersonas(),1);
	// Comprobar que su ID es correcto
	ASSERT_TRUE(p2.isOnList("123456789A"));
}

// Test priny
TEST(Persona, print){
	Persona p1("123456789A","Jesus","Marques Casanueva");
	Persona p2;
	Persona p3("000000000B", "Mario", "Garcia Gonzalez");

	std::cout << p1.printPersona() << std::endl;
	std::cout << p3.printPersona() << std::endl;
	p2.print();
}
