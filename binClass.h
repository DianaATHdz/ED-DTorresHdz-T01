#pragma once
#include "FetchClass.h"
#include "sortClass.h"
#include <iostream>

class sortClass;
class FetchClass;

class binClass : public FetchClass, public sortClass{
	virtual void BinClass();
	virtual int bFetch(int e);
	static int bFetch(int a[], int e);
};
