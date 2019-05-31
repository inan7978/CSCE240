/*Copyright Inan Ismailov 2019
a5176105-9dfb-4b57-b49f-60d43b330ca7*/
#ifndef _GRADEBOOK_H_  // NOLINT
#define _GRADEBOOK_H_  // NOLINT
#include <cassert>  // using assert
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stddef.h> // NOLINT
using std::cin;
using std::cout;
using std::endl;
using std::stringstream;
using std::string;
using std::vector;
class GradeBook {
 public:
GradeBook();
GradeBook(double, double);
double newGrade() const;
double gradebook() const;
void Add(double grade);
double Get(size_t index) const;
const GradeBook Add(const GradeBook& that) const;
double GetGPA() const;
double GetMax() const;
const size_t GetSize() const;
bool Equals(const GradeBook& that) const;
bool LessThan(const GradeBook& that) const;
 public:
double newGrade_;
double gradebook_;
vector<double> v;
};
#endif  //NOLINT
