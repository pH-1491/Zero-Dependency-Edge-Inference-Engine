#include "activations.h"
#include <cmath>

float relu(float x)
{
    return x > 0 ? x : 0;
}

float sigmoid(float x)
{
    return 1.0f / (1.0f + exp(-x));
}