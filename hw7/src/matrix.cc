// Copyright Inan Ismailov 2019
#ifndef __matrix_cc
#define __matrix_cc
#include <matrix.h>
template <typename T>
Matrix<T>::Matrix() : m_(nullptr), rows_(0), cols_(0) {}
template <typename T>
Matrix<T>::Matrix(unsigned int rows, unsigned int cols) :
rows_(rows), cols_(cols) {
assert(rows > 0);
assert(cols > 0);
m_ = new T *[rows_];
for (unsigned int i = 0; i < rows_; ++i)
m_[i] = new T[cols_];
}
template <typename T>
Matrix<T>::Matrix(const Matrix& that) {
rows_ = that.rows_;
cols_ = that.cols_;
m_ = new T *[rows_];
for (unsigned int i = 0; i < rows_; ++i) {
m_[i] = new T[cols_];
}
for (unsigned int i = 0; i < rows_; ++i) {
for (unsigned int j = 0; j < cols_; ++j) {
m_[i][j] = that.m_[i][j];
}
}
}
template <typename T>
Matrix<T>::~Matrix() {
if (m_) {
for (unsigned int i = 0; i < rows_; ++i) {
delete []m_[i];
}
delete [] m_;
}
}
template <typename T>
T Matrix<T>::Get(unsigned int row, unsigned int col) const {
assert(row < rows_);
assert(col < cols_);
return m_[row][col];
}
template <typename T>
const Matrix<T>& Matrix<T>::operator=(const Matrix<T>& rhs) {
if(this == &rhs) {
return *this;
}
if (m_) {
for (unsigned int i = 0; i < rows_; ++i) {
delete [] m_[i];
}
delete [] m_;
}
rows_ = rhs.rows_;
cols_ = rhs.cols_;
m_ = new T *[rows_];
for (unsigned int i = 0; i < rows_; ++i)
m_[i] = new T[cols_];
for (unsigned int i = 0; i < rows_; ++i) {
for (unsigned int j = 0; j < cols_; ++j) {
m_[i][j] = rhs.m_[i][j];
}
}
return *this;
}
template <typename T>
const Matrix<T>& Matrix<T>::operator*=(T rhs) {
for (unsigned int i = 0; i < rows_; ++i) {
for (unsigned int j = 0; j < cols_; ++j) {
m_[i][j] = m_[i][j] * rhs;
}
}
return *this;
}
template <typename T>
const Matrix<T> Matrix<T>::operator+(const Matrix<T>& rhs) const {
if (cols_ == rhs.cols_ && rows_ == rhs.rows_) {
Matrix newOne(rhs.rows_, rhs.cols_);
for (unsigned int i = 0; i < rows_; ++i) {
for (unsigned int j = 0; j < cols_; ++j) {
newOne.m_[i][j] = m_[i][j] + rhs.m_[i][j];
}
}
return newOne;
} else {
Matrix errorOne;
return errorOne;
}
}
#endif
