/*
 * Persona.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: JESUS MARQUES
 */

#include "Persona.h"

// Declaracion de miembros estaticos y, opcionalmente, su inicializacion
std::vector<Persona *> Persona::personList; // Lista de personas

// Metodo que comprueba si un elemento está en la lista
bool Persona::isOnList(std::string identificador) {
    	for (std::vector<Persona *>::iterator it = personList.begin();
    				it < personList.end();
    				it++) {
    			if ((*it)->ID == identificador) {
    				return true;    // Encontrado!
    			}
    	}
    	return false;   // No encontrado
}

// Constructor con identificadores
Persona::Persona(std::string ID,
        		std::string Nombre,
				std::string Apellidos) : nombre(Nombre), apellidos(Apellidos), ID(ID) {
    if (isOnList(ID) == false) {
    	personList.emplace_back(this);  // inserta elemento en la lista
    }
    // std::cout << "Estoy en Persona::Persona(std::string ID.....)" << std::endl;
}

// Constructor dummy
Persona::Persona() {
	// std::cout << "Estoy en Persona::Persona()" << std::endl;
}

// Destructor
Persona::~Persona() {
    int remove = -1;    // Elemento a eliminar
    for (int i = 0; i < nPersonas(); i++) {
    	if (personList[i] == this) {
    		remove = i;
    	}
    }
    if (remove != -1) {
    	personList.erase(personList.begin() + remove);
    }
    // std::cout << "Estoy en Persona::~Persona()" << std::endl;

}

// Escribe la lista de personas, una por linea
void Persona::print() {
    std::cout << "Lista de Personas en la lista" << std::endl;
    for (std::vector<Persona *>::iterator it = personList.begin();
            it < personList.end();
            it++) {
        std::cout << "Personal Data: " << (*it)->printPersona() << std::endl;
    }
}
