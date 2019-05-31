// Copyright 2019 Inan Ismailov
#include <median.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
namespace csce240 {
void Median::Collect(double datum) {
grades_.push_back(datum);
}
double Median::Calculate() const {
std::vector<double> newone;
for (unsigned int i = 0; i < grades_.size(); ++i) {
newone.push_back(grades_.at(i));
}
std::sort(newone.begin(), newone.end());
if (newone.size() % 2 == 0) {
double median = 0.0;
double first = newone.at((newone.size()/2) - 1);
double second = newone.at(newone.size()/2);
median = ((first + second)/2);
return median;
} else {
double median = newone.at(newone.size()/2);
return median;
}
}
}  // namespace csce240
