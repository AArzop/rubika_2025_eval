#include "XmlCache.h"

#include <rapidxml/rapidxml.hpp>
#include <rapidxml/rapidxml_utils.hpp>
#include <filesystem>

#pragma region Helper

// Those three functions are also helpers that can help you structure your code and avoid duplication
// There are optional, if you prefer to implement the all feature in another way, fell free to do so

/*
 * Those three functions are doing the same thing
 * In the node given in parameter, finds the child node using the name given in parameter
 * Uses the result of the last line to convert the value of the node into the right type
 * Finally, stores the converted value in the variable given in parameter
 */

bool SetBooleanFieldUsingChild(rapidxml::xml_node<>* node, const char* childName, bool& bField)
{
    return false;
}

bool SetIntFieldUsingChild(rapidxml::xml_node<>* node, const char* childName, int& iField)
{
    return false;
}

bool SetFloatFieldUsingChild(rapidxml::xml_node<>* node, const char* childName, float& fField)
{
    return false;
}

#pragma endregion

bool XmlCache::Parse(const char* filePath)
{
    /*
     * To be able to add an element in the map, those two lines are sufficient
     *      std::string a = "toto";
     *      SoundMap.emplace(a, sSound());
     * 
     * If you need something else, there sould be a problem on your side
     */

    return false;
}

const sSound* XmlCache::GetSound(const char* soundName) const
{
    return nullptr;
}

bool XmlCache::ParseRootNode(rapidxml::xml_document<>& xmlDoc)
{
    return false;
}

bool XmlCache::ParseSoundsNode(rapidxml::xml_node<>* xmlNode)
{
    return false;
}

bool XmlCache::ParseSoundNode(rapidxml::xml_node<>* xmlNode, sSound& sound)
{
    return false;
}
