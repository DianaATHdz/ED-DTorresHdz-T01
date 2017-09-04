#pragma once
#include <iostream>

class sortClass {
public:
	virtual void selection(int a[]);
	virtual void insertion(int a[]);
	virtual void bubble(int a[]);
	virtual int quickSortdivide(int a[], int i, int j);
	virtual void quicksort(int a[], int i, int j);
	virtual void merge(int a[], int b, int c, int m);
	virtual void mergeSort(int a[], int b, int c);
};
