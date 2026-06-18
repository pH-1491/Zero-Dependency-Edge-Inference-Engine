#ifndef ACTIVATION_H
#define ACTIVATION_H

#include "matrix.h"

class Activations {
public:
    static Matrix relu(const Matrix& input);
    static Matrix sigmoid(const Matrix& input);
};

#endif