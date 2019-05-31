// Copyright Inan Ismailov 2019 ec3cef59-5657-4701-80c9-68d38062324d
#ifndef _H_  //NOLINT
#define _H_ //NOLINT
#include <cassert>
#include <iostream>
class MatrixTester;
class Matrix {
 public:
friend class MatrixTester;
Matrix();
Matrix(unsigned int rows, unsigned int cols);
Matrix(const Matrix& that);
~Matrix();
double Get(unsigned int row, unsigned int col) const;
const Matrix& operator=(const Matrix& rhs);
const Matrix& operator*=(double rhs);
const Matrix operator+(const Matrix& rhs) const;
 private:
double **m_;  // array[] would have *. array[][] would have **.
unsigned int rows_;
unsigned int cols_;
};
#endif  //NOLINT