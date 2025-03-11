#pragma once

#include "Sound.h"

#include <map>
#include <string>
#include <rapidxml/rapidxml.hpp>

class XmlCache
{
public:
	XmlCache() = default;
	
	/*
	 * Parses the file given in parameter and fill the map with the content of the xml
	 * Returns true if everything went well. Returns false otherwise 
	 * This is a mandatory function that must be implemented without changing the signature
	 */
	bool Parse(const char* filePath);

	/*
	 * Returns the struct sSound associated with the name soundName and previously parsed and stored
	 * Returns a pointer of the corresponding struct if exists. Returns nullptr otherwise
	 * This is a mandatory function that must be implemented without changing the signature
	 */
	const sSound* GetSound(const char* soundName) const;

private:

	// Those three functions are helpers that can help you to structure your code
	// There are optional, if you prefer to implement the all feature in another way, fell free to do so

	/*
	 * Parses the root node of xml file
	 * Returns true if the parsing went well. Returns false otherwise
	 */
	bool ParseRootNode(rapidxml::xml_document<>& xmlDoc);

	/*
	 * Parses the Sounds node given in parameter and fill the map with the various nodes found
	 * Returns true if the parsing went well. Returns false otherwise
	 */
	bool ParseSoundsNode(rapidxml::xml_node<>* xmlNode);

	/*
	 * Parses the Sound node given in parameter and fill the sSound structure given in parameter with the content of the node
	 * Returns true if the parsing went well. Returns false otherwise
	 */
	bool ParseSoundNode(rapidxml::xml_node<>* xmlNode, sSound& sound);

	/*
	 * Stores the content of xml files parsed
	 * The key is the name of the sound (there won't be any duplicated id)
	 * The value is the data contained in the xml file which describe the sound
	 */
	std::map<std::string, sSound> SoundMap;
};

