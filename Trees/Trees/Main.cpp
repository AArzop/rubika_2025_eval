#include "Threshold.h"
#include "Vector.h"
#include "Tree.h"

#if THRESHOLD == 0

int main()
{
	Vector vec(8);

	vec.Add(0);
	vec.Add(-15);
	vec.Add(-8);
	vec.Add(12);
	vec.Add(20);
	vec.Add(6);

	vec.Print();
}

#endif

#if THRESHOLD == 1

int main()
{
	Tree tree;

	tree.Add(0);
	tree.Add(-15);
	tree.Add(-8);
	tree.Add(12);
	tree.Add(20);
	tree.Add(6);

	tree.Print();
}

#endif

#if THRESHOLD == 2

#include <time.h>
#include <stdlib.h>
#include <chrono>
#include <assert.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

void CompareFindTime(int size)
{
	std::cout << "========================" << std::endl;
	std::cout << "Size = " << size << std::endl;
	Tree tree;
	Vector vec(size);
	
	std::vector<int> numbers;
	numbers.reserve(size);
	for (unsigned i = 0; i < size; ++i)
	{
		numbers.push_back(i);
	}

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::shuffle(numbers.begin(), numbers.end(), std::default_random_engine(seed));

	auto treeStart = std::chrono::high_resolution_clock::now();
	for (int i : numbers)
	{
		tree.Add(i);
	}
	auto treeEnd = std::chrono::high_resolution_clock::now();
	std::cout << "Creation Tree : " << std::chrono::duration_cast<std::chrono::nanoseconds>(treeEnd - treeStart).count() << " ns" << std::endl;

	auto vecStart = std::chrono::high_resolution_clock::now();
	for (int i : numbers)
	{
		vec.Add(i);
	}
	auto vecEnd = std::chrono::high_resolution_clock::now();
	std::cout << "Creation Vec : " << std::chrono::duration_cast<std::chrono::nanoseconds>(vecEnd - vecStart).count() << " ns" << std::endl;

	int r = numbers[rand() % size];
	treeStart = std::chrono::high_resolution_clock::now();
	bool containTree = tree.Contains(r);
	treeEnd = std::chrono::high_resolution_clock::now();

	vecStart = std::chrono::high_resolution_clock::now();
	bool containVec = vec.Contains(r);
	vecEnd = std::chrono::high_resolution_clock::now();

	std::cout << "Tree : " << std::chrono::duration_cast<std::chrono::nanoseconds>(treeEnd - treeStart).count() << " ns" << std::endl;
	std::cout << "Vec  : " << std::chrono::duration_cast<std::chrono::nanoseconds>(vecEnd - vecStart).count() << " ns" << std::endl;

	assert(containTree == containVec);
}

int main()
{
	srand(time(NULL));

	CompareFindTime(10);
	CompareFindTime(1000);
	CompareFindTime(1000000);
	CompareFindTime(10000000);
}

#endif
