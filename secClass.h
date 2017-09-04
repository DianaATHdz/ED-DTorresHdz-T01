#pragma once
#include "FetchClass.h"
#include <iostream>

class FetchClass;
class secClass : public FetchClass{
public:
	virtual void SecClass();
	virtual int sFetch(int e);
	static int sFetch(int a[], int e);
};
