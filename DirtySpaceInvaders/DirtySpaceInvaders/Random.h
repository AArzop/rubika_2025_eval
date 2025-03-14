#pragma once

#include <random>

extern std::default_random_engine rGen;

typedef std::uniform_int_distribution<int> intRand;
typedef std::uniform_real_distribution<float> floatRand;