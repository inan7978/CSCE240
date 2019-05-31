// Copyright 2019 Inan Ismailov
#include <mean.h>
namespace csce240 {
void Mean::Collect(double datum) {
grades_.push_back(datum);
}
double Mean::Calculate() const {
double tPoints = 0.0;
for (unsigned int i = 0; i < grades_.size(); ++i) {
tPoints = tPoints + grades_.at(i);
}
if (grades_.size() == 0) {
return 0.0;
} else {
return tPoints/grades_.size();
}
}
}  // namespace csce240
