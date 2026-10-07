/*
 * Alumno_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: JESUS MARQUES
 */

#include "Alumno.h"
#include <gtest/gtest.h>

TEST(Alumno, test1) {
	Alumno<24> a1("123456789A", "Jesus", "Marques Casanueva");
	Alumno<24> a2("000000000B", "Pablo", "Sanchez Espeso");
	Alumno<24> a3("777777777X", "Jose Manuel", "Casanueva Villaro");

	Persona personList; // Dummy

	// Numero de personas en la lista
	ASSERT_EQ(personList.nPersonas(), 3);
	// Uno de los alumnos esta en la lista
	ASSERT_TRUE(personList.isOnList("123456789A"));

	a1.matricula("ASE");
	a1.matricula("Embebidos");
	a1.matricula("SEM");
	a1.matricula("ASE");

	// Numero de asignaturas: 3, no 4
	ASSERT_EQ((int)a1.courseList.size(), 3);

	// Pintar matriculas de a1
	a1.print();

	// a3.print();

	std::cout << "Cuestion a justificar en la memoria" << std::endl;
	Persona *dat;
	dat = &a1;
	dat->print();
}


