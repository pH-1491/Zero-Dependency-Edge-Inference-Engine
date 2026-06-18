#include "matrix.h"

int main() {

    Matrix A(2,2);
    Matrix B(2,2);

    A.at(0,0) = 1;
    A.at(0,1) = 2;
    A.at(1,0) = 3;
    A.at(1,1) = 4;

    B.at(0,0) = 5;
    B.at(0,1) = 6;
    B.at(1,0) = 7;
    B.at(1,1) = 8;

    Matrix C = A * B;

    C.print();

    return 0;
}