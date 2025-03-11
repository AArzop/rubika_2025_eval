#include "XmlCache.h"

int main()
{
	XmlCache parser;
	
	const char* filePath = "./Ressources/Sounds.xml";
	if (!parser.Parse(filePath))
	{
		return false;
	}

	const sSound* sound = parser.GetSound("Ping");
	if (sound)
	{
		sound->Print();
	}

	sound = parser.GetSound("Pong");
	if (sound)
	{
		sound->Print();
	}

	sound = parser.GetSound("Marco");
	if (sound)
	{
		sound->Print();
	}

	sound = parser.GetSound("Polo");
	if (sound)
	{
		sound->Print();
	}

	sound = parser.GetSound("Toto");
	if (sound)
	{
		sound->Print();
	}
}