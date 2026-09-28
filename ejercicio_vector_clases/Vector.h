/*
 * Vector.h
 *
 *  Created on: 28 sept 2026
 *      Author: JESUS MARQUES
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector {
public:
	Vector();				// Array vacio
	Vector(int nelem);		// Array n elementos
	~Vector();
	bool set(int pos, int val);
	bool get(int pos, int &val);
private:
	int n; // Numero de elementos
	int *dat; // Array de valores
};

#endif /* VECTOR_H_ */
