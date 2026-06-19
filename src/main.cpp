#include "matrix.h"
#include "dense_layer.h"

int main()
{
    Matrix input(1, 3);

    input.at(0,0) = 1;
    input.at(0,1) = 2;
    input.at(0,2) = 3;

    DenseLayer layer(3, 2);

    Matrix output = layer.forward(input);

    output.print();

    return 0;
}