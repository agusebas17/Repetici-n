# Repeticion

![Texto alternativo](https://i.ytimg.com/vi/Zuz_TnY1skE/maxresdefault.jpg)


**Problema:**
  Enviar una frase a la salida estándar muchas veces.
  
**Analisis:**
  El problema consiste en "imprimir" una frase n veces, realizando este programa de dos formas: itineracon y saltos.
  
  La primera se resolvio solicitando al usuario que ingrese tanto la cantidad de veces que se desea repetir el mensaje, como dicho mensaje. Para que se logre esto se utilizo una estructura de repeticion "FOR", utilizando la variable ingresada por el usuario para que se cumpla lo deseado. A su vez se imprime un mensaje indicando el mensaje que se repetira y la cantidad de veces. 
  
  En la segunda forma, se solicito de la misma forma que el usuario ingrese la frase que se desea repetir, pero se repetira de, una manera fija, 50 veces. Tambien se imprimira un mensaje indicnado el mensaje que se repetira y la cantidad de veces (50).
  
**Lexico:**

	1.En el programa itineracion.cpp se utilizo:
	
		 a -> Entero
		 
		 frase ->char
		 
	2. En el porgrama saltos:
	
		frase -> char
  
  
 **Algoritmos**


 *Itineracion:*
 
 ```c++
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
```
*Saltos:*

```c++
#include <iostream>

 int main() {
	char frase [200];
	std::cout << "Ingrese la frase que quiere que se repita:";
	std::cin.getline(frase,200);/*Leer frase. Se duplica el comando, debido a que el primero lee el buffer*/
	std::cout << "La frase es: "<< frase << ". Y se repetira "<<" 50 veces.\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
	std::cout << frase << "\n";
}
```
