#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;

class FetchClass {
protected:
	int* myArray;  
public:
	virtual void fetchClass();
	virtual void setArray(int a[]);
	virtual int* getArray();
	virtual int* RandArray(int size);
	virtual void showArray();
	virtual void showFetch(int position);
	virtual void showArray(int a[]);
};