#include <iostream>

#include "activations.h"
#include "matrix.h"

using namespace std;

int main()
{
    float A[2] = {1, 2};
    float B[2] = {3, 4};
    float C[1];

    matmul(A, B, C, 1, 1, 2);

    cout << "Result = " << C[0] << endl;

    cout << relu(-5) << endl;
    cout << relu(10) << endl;
    return 0;
}