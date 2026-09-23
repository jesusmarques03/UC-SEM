/*
 * main.cpp
 *
 *  Created on: 17 sept 2026
 *      Author: JESUS MARQUES
 */

#include <iostream>

// TEST 1
int suma(int d1, int d2){
	std::cout << "suma(int,int): " << d1 << " + " << d2 << std::endl;
	return d1+d2;
}

// TEST 2
int suma(){
	std::cout << "suma(): 1 + 2" << std::endl;
	return 1+2;
}

// TEST 3
int suma(int a){
	std::cout << "suma(int): " << a << " + 2" << std::endl;
	return a+2;
}

// TEST 4
int suma(float a, float b){
	std::cout << "suma(float,float): " << a << " + " << b << std::endl;
	return a+b;
}

/*
 * main


#include <cstdlib>
#include <iostream>

int main(int narg, char *arg[]){
	int d1=50;
	int d2=100;
	if(narg > 1){
		d1=std::atoi(arg[1]);
	}
	if(narg > 1){
		d2=std::atoi(arg[2]);
	}
	std::cout<<"suma "<<d1<<" y "<<d2<<" = "<<suma(d1,d2)<<std::endl;
	return 0;
}
*/
