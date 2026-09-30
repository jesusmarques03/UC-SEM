/*
 * Base.h
 *
 *  Created on: 30 sept 2026
 *      Author: JESUS MARQUES
 */

#ifndef BASE_H_
#define BASE_H_

#include <iostream>

class Base {
protected:
	int a;
	int b;
public:
	static int comun;
	int global();
	void get(int &va, int &vb);
	virtual int suma();
	Base();
	virtual ~Base();
	Base(const Base &other);
	Base(int va) { // Inline
		a = va;
		b = 0;
		std::cout << "En constructor Base::Base(int va)" << std::endl;
	}
};

#endif /* BASE_H_ */
