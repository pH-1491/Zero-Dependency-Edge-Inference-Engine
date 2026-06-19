#include "activations.h"
#include <cmath>

Matrix Activations::relu(const Matrix& input)
{
    Matrix result(input.getRows(), input.getCols());

    for(int i = 0; i < input.getRows(); i++)
    {
        for(int j = 0; j < input.getCols(); j++)
        {
            double value = input.at(i, j);

            if(value > 0)
                result.at(i, j) = value;
            else
                result.at(i, j) = 0;
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
            double value = input.at(i, j);

            result.at(i, j) =
                1.0 / (1.0 + std::exp(-value));
        }
    }

    return result;
}