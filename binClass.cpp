#include<iostream>
#include "sortClass.h"
#include "FetchClass.h"
#include "binClass.h"

	//binClass
	void binClass::BinClass() {}

	//bFetch
	int binClass::bFetch(int e) {
		return bFetch(myArray, e);
	}

	int binClass::bFetch(int a[], int e) {
		int n = sizeof(a);

		int centro, inicio = 0, fin = n - 1; //En una busqueda binaria se divide el vector en inicio, centro y final, al momento de iniciar la busqueda


		while (inicio <= fin) { //mientras que el inicio sea menor (o igual en unos casos) al final de la cadena...
			centro = (inicio + fin) / 2; //Se suman y se dividen entre dos para encontrar el centro

			if (a[centro] == e) return centro; //Se regresa el valor conseguido del centro


			else
				if (e < a[centro]) { //Si el dato es menor que el valor centro
					fin = centro - 1; //mover final a centro -1
				}
				else {
					inicio = centro + 1; //mover final a centro +1
				}
		}
		return -1;
	}