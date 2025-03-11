#pragma once

#include <vector>
#include <string>

struct sSound
{
	sSound();

	std::string Name;
	bool Loop;
	float Length;
	bool Mono;
	
	std::vector<float> Triggers;

	void Print() const;
};