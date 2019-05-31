// Copyright Inan Ismailov 2019
#include <matrix.h>
Matrix::Matrix() : m_(nullptr), rows_(0), cols_(0) {}
Matrix::Matrix(unsigned int rows, unsigned int cols) :
rows_(rows), cols_(cols) {
assert(rows > 0);
assert(cols > 0);
m_ = new double *[rows_];
for (unsigned int i = 0; i < rows_; ++i)
m_[i] = new double[cols_];
}
Matrix::Matrix(const Matrix& that) {
rows_ = that.rows_;
cols_ = that.cols_;
m_ = new double *[rows_];
for (unsigned int i = 0; i < rows_; ++i)
m_[i] = new double[cols_];
for (unsigned int i = 0; i < rows_; ++i) {
for (unsigned int j = 0; j < cols_; ++j) {
m_[i][j] = that.m_[i][j];
}
}
}
Matrix::~Matrix() {
if (m_) {
for (unsigned int i = 0; i < rows_; ++i) {
delete []m_[i];
}
delete [] m_;
}
}
double Matrix::Get(unsigned int row, unsigned int col) const {
assert(row < rows_);
assert(col < cols_);
return m_[row][col];
}
const Matrix& Matrix::operator=(const Matrix& rhs) {
if(this == &rhs) {
return *this;
}
if (m_) {
delete [] m_;
}
rows_ = rhs.rows_;
cols_ = rhs.cols_;
m_ = new double *[rows_];
for (unsigned int i = 0; i < rows_; ++i)
m_[i] = new double[cols_];
for (unsigned int i = 0; i < rows_; ++i) {
for (unsigned int j = 0; j < cols_; ++j) {
m_[i][j] = rhs.m_[i][j];
}
}
return *this;
}
const Matrix& Matrix::operator*=(double rhs) {
for (unsigned int i = 0; i < rows_; ++i) {
for (unsigned int j = 0; j < cols_; ++j) {
m_[i][j] = m_[i][j] * rhs;
}
}
return *this;
}
const Matrix Matrix::operator+(const Matrix& rhs) const {
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
