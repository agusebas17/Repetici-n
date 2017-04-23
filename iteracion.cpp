/*
 * iteracion.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author:Agustin Sebastian
 *      Repostiorio: agusebas17
 */
#include <iostream>



int main() {
	char frase [200];
	int a; /* a es la variable de repeticion */
	std::cout << "Ingresa la cantidad de veces que desea que se repita el mensaje:";
		std::cin >> a;
	std::cout << "Ingrese la frase que quiere que se repita:";
	std::cin.getline(frase,200);
	std::cin.getline(frase,200);/*Leer frase. Se duplica el comando, debido a que el primero lee el buffer*/
	std::cout << "La frase es: "<< frase << ". Y se repetira "<< a <<" veces.\n";
	for(int i=0;i<a;i++){
		std::cout << frase << "\n"; /* La frase ingresada se repitira a veces */



	}

	return 0;
}
