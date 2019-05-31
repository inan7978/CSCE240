// Copyright 2019 Inan Ismailov
#ifndef _HW_6_MEDIAN_H_  //NOLINT
#define _HW_6_MEDIAN_H_  //NOLINT
#include <statistic.h>
#include <vector>
using std::vector;
#include <cmath>
namespace csce240 {
class Median : public Statistic {
 public:
void Collect(double datum);
double Calculate() const;
 private:
vector<double> grades_;
};
}  // namespace csce240
#endif //NOLINT