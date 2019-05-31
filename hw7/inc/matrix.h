// Copyright 2019 Inan Ismailov cefdec10-d808-4bb2-a78b-1b02ae652a26
#ifndef _MATRIX_H_ //NOLINT
#define _MATRIX_H_ //NOLINT
#include <cassert>
#include <ostream>
class MatrixTester;
template <typename T>
class Matrix {
 public:
friend class MatrixTester;
Matrix();
Matrix(unsigned int rows, unsigned int cols);
Matrix(const Matrix& that);
~Matrix();
T Get(unsigned int row, unsigned int col) const;
const Matrix& operator=(const Matrix& rhs);
const Matrix& operator*=(T rhs);
const Matrix operator+(const Matrix& rhs) const;
 private:
T **m_;
unsigned int rows_;
unsigned int cols_;
};
#include "matrix.cc" //NOLINT
#endif //NOLINT