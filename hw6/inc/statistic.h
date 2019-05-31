// Copyright 2019 Inan Ismailov e61fba4e-df8e-4f5e-b28d-4415623c737e
#ifndef _HW_6_STATISTIC_H_ //NOLINT
#define _HW_6_STATISTIC_H_ //NOLINT
namespace csce240 {
class Statistic {
 public:
virtual ~Statistic() { /*Empty*/ }
virtual void Collect(double) = 0;
virtual double Calculate() const = 0;
};
}
#endif //NOLINT