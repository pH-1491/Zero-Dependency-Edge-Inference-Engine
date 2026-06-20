#pragma once

#include "dense_layer.h"

class NeuralNetwork
{
private:
    DenseLayer layer1;
    DenseLayer layer2;

public:
    NeuralNetwork();

    Matrix predict(const Matrix& input);
};