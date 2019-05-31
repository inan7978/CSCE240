// Copyright 2019 Inan Ismailov a21d6808-8b91-4145-a2cb-1f116373b835
#ifndef _HW4_GRADEBOOK_H_  // NOLINT
#define _HW4_GRADEBOOK_H_  // NOLINT
#include <cmath>
#include <vector>
class GradeBook {
 public:
void Add(double);
double Get(size_t) const;
const GradeBook operator+(double rhs) const;
const GradeBook operator+(const GradeBook& rhs) const;
bool operator==(const GradeBook& rhs) const;
bool operator==(double rhs) const;
bool operator<(const GradeBook& rhs) const;
bool operator<(double rhs) const;
 private:
std::vector<double> grades_;
};
const GradeBook operator+(double lhs, const GradeBook& rhs);
bool operator==(double lhs, const GradeBook& rhs);
bool operator<(double lhs, const GradeBook& rhs);
#endif  // NOLINT