#pragma once

#include "Threshold.h"

class Vector
{
#if THRESHOLD >= 0
public:
	Vector(int capacity);
	~Vector();

	void Add(int data);
	void Print() const;

	bool Contains(int data) const;

private:

	int CurrentIndex;
	int Capacity;
	int* Data;
#endif

};

