#include <cstdlib> 
#include <ctime>
#include <iostream> 
#include "SecClass.h"
#include "BinClass.h"
#include "FetchClass.h"
#include "SortClass.h"
using namespace std;

const int tamano = 4, MAXIMO = 100;
int main(int argc, char *argv[]) {
	
	secClass OS;
	binClass PS;
	int arreglo[tamano] = { 0 };
	int i;
	srand(time(0));
	for (i = 0; i < tamano; ++i)
		arreglo[i] = rand() % MAXIMO;
	cout << "Los valores del arreglo son:\n";
	for (i = 0; i < tamano; ++i) {
		cout << "arreglo[" << i << "] = " << arreglo[i];
		cout << "\n";
	}

	OS.setArray(arreglo);
	OS.showFetch(OS.sFetch(4));

	PS.bubble(arreglo);
	//PS.fetchClass(arreglo);
	//PS.mergeSort(arreglo);
	//PS.quicksort(arreglo);

	system("PAUSE");
	return EXIT_SUCCESS;
};