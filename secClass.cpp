#include <stdio.h>
using namespace std;
#include "secClass.h"
#include "FetchClass.h"
class FetchClass;

	//secClass
	void secClass::SecClass() {}

	//sFetch
	int secClass::sFetch(int e) {
		return sFetch(myArray, e);
	}

	//sFetch 2.0
	int secClass::sFetch(int a[], int e) {
		int posicion = -1;
		for (int i = 0; i < sizeof(a); i++) {			//Se recorre todo el arreglo
			if (a[i] == e) {							//Se compara cada elemento en el arreglo con el elemento que estamos buscando
				posicion = i;							//Si es true guardamos la posicion de este
				break;									//Para cerrar el ciclo
			}
		}
		return posicion;
	}
