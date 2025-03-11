#pragma once

#include "Threshold.h"

class Tree
{
#if THRESHOLD >= 1

	struct Node
	{
		Node();
		~Node();

		int Data;
		Node* Left;
		Node* Right;
	};

public:
	Tree();
	~Tree();

	bool Add(int value);
	void Print() const;

	bool Contains(int value) const;

private:
	Node* Root;
#endif
};

