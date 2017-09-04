#include <iostream>
#include "FetchClass.h"
#include <time.h>

	//fetchClass
	void FetchClass::fetchClass() {
	}

	///setArray
	void FetchClass::setArray(int a[]) {
		myArray = a;
	}

	//getArray
	int* FetchClass::getArray() {
		return myArray;
	}

	//RandArray 
	int* FetchClass::RandArray(int size) {
		//Array Random
//		srand(time(NULL));
		int* temp = new int[size];

		for (int i = 0; i < sizeof(temp); i++) {
			temp[i] = (int)(rand() % 100)+1; //comando para mencionar un numero random
		}
		return temp;
	}

	//showArray
	void FetchClass::showArray() {
		showArray(myArray);
	}

	//showFetch
	void FetchClass::showFetch(int position) {
		if (position == -1) {
			printf("Lo sentimos, el valor solicitado no se encuentra en el vector");
		}
		else printf("El valor solicitado se encuentra en la posición ", "%d", position);
	}

	//showArray 2.0
	void FetchClass::showArray(int a[]) {
		string resultado;
		resultado = "[";
		for (int i = 0; i < sizeof(a); i++) {
			resultado += a[i];							//El resultado se guardara en promedio
			cout << endl;
			if (i < sizeof(a) - 1)resultado += ",";
		}
		resultado += "]";
		printf("%u\n", &resultado);
	}