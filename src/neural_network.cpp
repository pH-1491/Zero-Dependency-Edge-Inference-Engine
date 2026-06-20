#include "neural_network.h"
#include "activations.h"

NeuralNetwork::NeuralNetwork()
    : layer1(3,4),
      layer2(4,2)
{
}

Matrix NeuralNetwork::predict(const Matrix& input)
{
    Matrix hidden =
        Activations::relu(
            layer1.forward(input)
        );

    Matrix output =
        Activations::sigmoid(
            layer2.forward(hidden)
        );

    return output;
}