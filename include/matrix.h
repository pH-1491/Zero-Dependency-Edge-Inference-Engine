#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix {
private:
    int rows;
    int cols;
    std::vector<double> data;

public:
    Matrix(int r, int c);

    double& at(int r, int c);
    double at(int r, int c) const;

    int getRows() const;
    int getCols() const;

    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;

    void print() const;
};

#endif