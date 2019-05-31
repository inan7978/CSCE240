// Copyright 2019 Inan Ismailov
#include "gradebook.h"  // NOLINT
#include <cmath>
#include <vector>


void GradeBook::Add(double grade) {
  grades_.push_back(grade);
}
double GradeBook::Get(size_t index) const {
  return index < grades_.size() ? grades_[index] : NAN;
}
  const GradeBook GradeBook::operator+(double rhs) const {
GradeBook newOne;
for (size_t i = 0; i < grades_.size(); ++i) {
newOne.Add(Get(i));
}
newOne.Add(rhs);
return newOne;
}
  const GradeBook GradeBook::operator+(const GradeBook& rhs) const {
GradeBook newOne;
for (size_t i = 0; i < grades_.size(); ++i) {
newOne.Add(grades_.at(i));
}
for (size_t i = 0; i < rhs.grades_.size(); ++i) {
newOne.Add(rhs.Get(i));
}
return newOne;
}
  bool GradeBook::operator==(const GradeBook& rhs) const {
int numGrades = grades_.size();
double total = 0.0;
double average = 0.0;
int numGrades2 = rhs.grades_.size();
double total2 = 0.0;
double average2 = 0.0;
if (numGrades == 0) {
average = -INFINITY;
} else {
for (int i = 0; i < numGrades; ++i) {
total = total + grades_.at(i);
}
average = total/numGrades;
}
if (numGrades2 == 0) {
average2 = -INFINITY;
} else {
for (int i = 0; i < numGrades2; ++i) {
total2 = total2 + rhs.grades_.at(i);
}
average2 = total2/numGrades2;
}
if (average == average2) {
return true;
} else {
return false;
}
}
  bool GradeBook::operator==(double rhs) const {
int numGrades = grades_.size();
double total = 0.0;
double average = 0.0;
if (numGrades == 0) {
average = -INFINITY;
} else {
for (int i = 0; i < numGrades; ++i) {
total = total + grades_.at(i);
}
average = total/numGrades;
}
if (average == rhs) {
return true;
} else {
return false;
}
}
  bool GradeBook::operator<(const GradeBook& rhs) const {
double average = 0.0;
double total = 0.0;
double max = 0.0;
int numGrade = grades_.size();
double average2 = 0.0;
double total2 = 0.0;
double max2 = 0.0;
int numGrade2 = rhs.grades_.size();
for(int i = 0; i < numGrade; ++i) {
total = total + grades_.at(i);
if (grades_.at(i) > max) {
max = grades_.at(i);
}
}
average = total/numGrade;

for (int i = 0; i < numGrade2; ++i) {
total2 = total2 + rhs.grades_.at(i);
if (rhs.grades_.at(i) > max2) {
max2 = rhs.grades_.at(i);
}
}
average2 = total2/numGrade2;
if (average == average2) {
if (max < max2) {
return true;
} else {
return false;
}
}
if (average < average2) {
return true;
} else {
return false;
}
}
  bool GradeBook::operator<(double rhs) const {
double average = 0.0;
double total = 0.0;
int numGrade = grades_.size();
for (int i = 0; i < numGrade; ++i) {
total = total + grades_.at(i);
}
average = total/numGrade;
if (average < rhs) {
return true;
} else {
return false;
}
}
const GradeBook operator+(double lhs, const GradeBook& rhs) {
GradeBook newOne;
int i = 0;
int size = 0;
while (!std::isnan(rhs.Get(i))) {
++i;
++size;
}
for (int i = 0; i < size; ++i) {
newOne.Add(rhs.Get(i));
}
newOne.Add(lhs);
return newOne;
}
bool operator==(double lhs, const GradeBook& rhs) {
int i = 0;
int size = 0;
double average;
double total = 0.0;
while (!std::isnan(rhs.Get(i))) {
++i;
++size;
}
for (int i = 0; i < size; ++i) {
total = total + rhs.Get(i);
}
if (size == 0) {
average = -INFINITY;
} else {
average = total/size;
}
if (average == lhs) {
return true;
} else {
return false;
}
}
bool operator<(double lhs, const GradeBook& rhs) {
int i = 0;
int size = 0;
double total = 0.0;
double average;
while (!std::isnan(rhs.Get(i))) {
++i;
++size;
}
for (int i = 0; i < size; ++i) {
total = total + rhs.Get(i);
}
average = total/size;
if (lhs < average) {
return true;
} else {
return false;
}
}
