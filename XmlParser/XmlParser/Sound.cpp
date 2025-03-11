#include "Sound.h"

#include <iostream>

sSound::sSound() :
	Name(), Loop(false), Length(0.f), Mono(false), Triggers()
{}

void sSound::Print() const
{
	std::cout << Name << std::endl;
	std::cout << "\tLoop : " << Loop << std::endl;
	std::cout << "\tLength : " << Length << std::endl;
	std::cout << "\tMono : " << Mono << std::endl;
	std::cout << "\tTriggers : " << Triggers.size() << std::endl;
	for (const float& f : Triggers)
	{
		std::cout << "\t\t" << f << std::endl;
	}
}
