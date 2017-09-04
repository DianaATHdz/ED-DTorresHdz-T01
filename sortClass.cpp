#include <iostream>
#include"sortClass.h"

	void sortClass::selection(int a[]) {
		for (int i = 0; i < sizeof(a) - 1; i++) {			 //Para un numero i igual a cero, i debe ser menor que el largo del vector menos uno
			int min = i;                                     //declarar variable minimo es igual a i
			for (int j = i + 1; j < sizeof(a); j++) {        //Aquí se irá corriendo el vector j que será donde se acomoden los numeros
				if (a[j] < a[min]) {						 //Si el vector j es menor se colocara
					min = j;
				}
			}
			if (i != min) {									//Si i es diferente  que el minimo
				int aux = a[i];
				a[i] = a[min];
				a[min] = aux;
			}
		}
		printf("\n Se realizo la funcion selection con exito \n");
	}

	void sortClass::insertion(int a[]) {
		int temp;
		for (int i = 1; i<sizeof(a); i++) {
			temp = a[i];
			int j = i - 1;
			while ((j >= 0) && (a[j] > temp)) {
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = temp;
		}
		printf("\n Se realizo la funcion insertion con exito \n");
	}

	void sortClass::bubble(int a[]) {
		int temp;
		for (int i = 1; i<sizeof(a); i++) {
			for (int j = 0; j<sizeof(a) - 1; j++) {
				if (a[j] > a[j + 1]) {
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		printf("\n Se realizo la funcion bubble con exito \n");
	}

	void intercambio(int a[],int i, int j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

	int sortClass::quickSortdivide(int a[] , int i, int j) {
	
		int inicio = 0, ultimo = 0, pivote, temp;

		pivote = a[i];
		inicio = i;
		ultimo = j;

		
		while (inicio < ultimo) {										// Mientras no se cruzen los índices
			while (a[ultimo] > pivote) {								
				ultimo--;
			}

			while ((inicio < ultimo) && (a[inicio] <= pivote)) {
				inicio++;
			}

			if (ultimo < inicio) {											// Si todavía no se cruzan los indices seguimos intercambiando
				temp = a[ultimo];
				a[ultimo] = a[inicio];
				a[inicio] = temp;
			}
		}

		temp = a[inicio];												// Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
		a[inicio] = a[i];
		a[i] = temp;

		return inicio;											// Se acomoda la nueva posición del pivote
	}

	void sortClass::quicksort(int a[], int i, int j)						// Función recursiva para hacer el ordenamiento
	{
		int pivote;

		if (i < j) {
			pivote = quickSortdivide(a, i, j);
	
			quicksort(a, pivote + 1, j);						// Ordeno la lista de los mayores
		}
		printf("\n Se realizo la funcion quicksort con exito \n");
	}

	void sortClass::merge(int a[], int b, int c, int m) {
		
		int i, j, k, temp[1];
		temp[1] = temp[c - b + 1];
		i = b;
		k = 0;
		j = m + 1;

		while (i <= m && j <= c){					// Tenemos b a m y m + 1 a c ya ordenados
			if (a[i] < a[j]){
				temp[k] = a[i];
				k++;
				i++;
			}
			else{
				temp[k] = a[j];
				k++;
				j++;
			}
		}

	
		while (i <= m){			// Insertar todos los valores restantes de i a m en temp [].
			temp[k] = a[i];
			k++;
			i++;
		}

		while (j <= c)		// Insertar todos los valores restantes de j a c en temp [].
		{
			temp[k] = a[j];
			k++;
			j++;
		}

		for (i = b; i <= c; i++)	// Asigna los datos clasificados almacenados en temp [] a [].
		{
			a[i] = temp[i - b];
		}
	}

	void sortClass::mergeSort(int a[], int b, int c) {
		int m;
		if (b < c)
		{
			m = (b + c) / 2;
			mergeSort(a, b, m); 		// Divide los datos en dos partes
			mergeSort(a, m + 1, c);

			merge(a, b, c, m); 	// Combinarlos para obtener una salida ordenada
		}
		printf("\n Se realizo la funcion mergesort con exito \n");
};