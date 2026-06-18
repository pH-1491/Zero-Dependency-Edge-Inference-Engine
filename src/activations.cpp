#include "activations.h"
#include <cmath>

Matrix Activations::relu(const Matrix& input)
{
    Matrix result(input.getRows(), input.getCols());

    for(int i = 0; i < input.getRows(); i++)
    {
        for(int j = 0; j < input.getCols(); j++)
        {
            result.at(i,j) =
                std::max(0.0, input.at(i,j));
        }
    }

    return result;
}

Matrix Activations::sigmoid(const Matrix& input)
{
    Matrix result(input.getRows(), input.getCols());

    for(int i = 0; i < input.getRows(); i++)
    {
        for(int j = 0; j < input.getCols(); j++)
        {
            result.at(i,j) =
                1.0 / (1.0 + std::exp(-input.at(i,j)));
        }
    }

    return result;
}