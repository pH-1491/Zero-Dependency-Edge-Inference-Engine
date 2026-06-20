#include "neural_network.h"

int main()
{
    Matrix input(1,3);

    input.at(0,0) = 1;
    input.at(0,1) = 2;
    input.at(0,2) = 3;

    NeuralNetwork net;

    Matrix output = net.predict(input);

    output.print();

    return 0;
}