/*
 * Alumno.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: JESUS MARQUES
 */

#include "Alumno.h"

template <int curso>
Alumno<curso>::Alumno(std::string ID,
			std::string Nombre,
			std::string Apellidos) : Persona::Persona(ID, Nombre, Apellidos) {
}

template <int curso>
Alumno<curso>::~Alumno() {
	// TODO Auto-generated destructor stub
}

// Matricula en asignatura si no esta ya en la lista
template <int curso>
bool Alumno<curso>::matricula(std::string asignatura){
    for (std::vector<std::string>::iterator it = courseList.begin();
            it < courseList.end();
            it++) {
    	if(*it == asignatura){
    		return false; // La asignatura ya estaba
    	}
    }
    courseList.emplace_back(asignatura);
    return true; // La asignatura no estaba y la coloca al final de la lista
}

template <int curso>
void Alumno<curso>::print(){
	std::cout << "Listado de asignaturas en curso " << curso << "-" << curso+1 << std::endl;
	std::cout << "Alumno: " << printPersona() << std::endl;
	for (std::vector<std::string>::iterator it = courseList.begin();
	         it < courseList.end();
	         it++) {
			std::cout << "	Asignatura: " << *it << std::endl;
	}
}

// Plantilla curso 24
template class Alumno<24>;
