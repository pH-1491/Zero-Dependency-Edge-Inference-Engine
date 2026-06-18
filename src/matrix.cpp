#include "matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int r, int c)
    : rows(r), cols(c), data(r * c, 0.0) {}

double& Matrix::at(int r, int c) {
    return data[r * cols + c];
}

double Matrix::at(int r, int c) const {
    return data[r * cols + c];
}

int Matrix::getRows() const {
    return rows;
}

int Matrix::getCols() const {
    return cols;
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(rows, cols);

    for(int i = 0; i < rows * cols; i++) {
        result.data[i] = data[i] + other.data[i];
    }

    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    Matrix result(rows, other.cols);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < other.cols; j++) {
            for(int k = 0; k < cols; k++) {
                result.at(i,j) += at(i,k) * other.at(k,j);
            }
        }
    }

    return result;
}

void Matrix::print() const {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << at(i,j) << " ";
        }
        cout << endl;
    }
}