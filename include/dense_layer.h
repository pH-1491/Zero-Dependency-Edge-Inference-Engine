#pragma once

#include "matrix.h"

class DenseLayer
{
private:
    Matrix weights;
    Matrix bias;

public:
    DenseLayer(int inputSize, int outputSize);
    DenseLayer(const Matrix& w, const Matrix& b);

    Matrix forward(const Matrix& input);
};