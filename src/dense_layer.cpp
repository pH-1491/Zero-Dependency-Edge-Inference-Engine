#include "dense_layer.h"
#include <cstdlib>

DenseLayer::DenseLayer(int inputSize, int outputSize)
    : weights(inputSize, outputSize),
      bias(1, outputSize)
{
    // Random initialization

    for(int i = 0; i < inputSize; i++)
    {
        for(int j = 0; j < outputSize; j++)
        {
            weights.at(i, j) =
                ((double) rand() / RAND_MAX) - 0.5;
        }
    }

    for(int j = 0; j < outputSize; j++)
    {
        bias.at(0, j) = 0.0;
    }
}


Matrix DenseLayer::forward(const Matrix& input)
{
    Matrix output = input * weights;

    for(int j = 0; j < output.getCols(); j++)
    {
        output.at(0, j) += bias.at(0, j);
    }

    return output;
}


DenseLayer::DenseLayer(const Matrix& w, const Matrix& b)
    : weights(w), bias(b)
{
}