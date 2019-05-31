/*Copyright 2019 Inan Ismailov*/
#include "gradebook.h" // NOLINT
GradeBook::GradeBook() {
newGrade_ = 0.0;
gradebook_ = 0.0;
vector<double> v;
}
GradeBook::GradeBook(double newGrade, double gradebook) {
newGrade_ = newGrade;
gradebook_ = gradebook;
}
double GradeBook::newGrade() const {
return newGrade_;
}
double GradeBook::gradebook() const {
return gradebook_;
}
void GradeBook::Add(double grade) {
v.push_back(grade);
}
double GradeBook::Get(size_t index) const {
if (index >= v.size() || 0 > index) {
return NAN;
} else {
return v.at(index);
}
}
const GradeBook GradeBook::Add(const GradeBook& that) const {
GradeBook sum;
for (int i = 0; i < v.size(); ++i) {
sum.v.push_back(v.at(i));
}
for (int i = 0; i < that.v.size(); ++i) {
sum.v.push_back(that.v.at(i));
}
return sum;
}
double GradeBook::GetGPA() const {
if(v.empty()) {
return NAN;
} else {
double tPoints = 0.0;
int nGrades = v.size();
for (int i = 0; i < v.size(); ++i) {
tPoints = tPoints + v.at(i);
}
double tmp = tPoints/nGrades;
double gpa = (tmp/20)-1;
return tmp;
}
}
double GradeBook::GetMax() const {
if (v.empty()) {
return NAN;
} else {
double maxGrade = 0.0;
for (int i = 0; i < v.size(); ++i) {
if(v.at(i) > maxGrade) {
maxGrade = v.at(i);
}
}
return maxGrade;
}
}
const size_t GradeBook::GetSize() const {
size_t size = v.size();
}
bool GradeBook::Equals(const GradeBook& that) const {
double ThatTotalPoints = 0.0;
double ThatMaxGrade = 0.0;
double ThatAverage;
if (that.v.size() <= 0) {
ThatAverage = -INFINITY;
} else {
for (int i = 0; i < that.v.size(); ++i) {
ThatTotalPoints = ThatTotalPoints + that.v.at(i);
if (that.v.at(i) > ThatMaxGrade) {
ThatMaxGrade = that.v.at(i);
}
}
ThatAverage = ThatTotalPoints/that.v.size();
}
double TotalPoints = 0.0;
double MaxGrade = 0.0;
double Average;
if (v.size() <= 0) {
Average = -INFINITY;
} else {
for (int i = 0; i < v.size(); ++i) {
TotalPoints = TotalPoints + v.at(i);
if (v.at(i) > MaxGrade) {
MaxGrade = v.at(i);
}
}
Average = TotalPoints/v.size();
}
if (Average == ThatAverage) {
return true;
} else {
return false;
}
return NAN;
}
bool GradeBook::LessThan(const GradeBook& that) const {
double ThatTotalPoints = 0.0;
double ThatMaxGrade = 0.0;
double ThatAverage;

if (that.v.size() <= 0) {
ThatAverage = -INFINITY;
} else {
for (int i = 0; i < that.v.size(); ++i) {
ThatTotalPoints = ThatTotalPoints + that.v.at(i);
if (that.v.at(i) > ThatMaxGrade) {
ThatMaxGrade = that.v.at(i);
}
}
ThatAverage = ThatTotalPoints/that.v.size();
}
double TotalPoints = 0.0;
double MaxGrade = 0.0;
double Average;
if (v.size() <= 0) {
Average = -INFINITY;
} else {
for (int i = 0; i < v.size(); ++i) {
TotalPoints = TotalPoints + v.at(i);
if (v.at(i) > MaxGrade) {
MaxGrade = v.at(i);
}
}
Average = TotalPoints/v.size();
}
if (Average < ThatAverage) {
return true;
}
if (Average > ThatAverage) {
return false;
}
if (Average == ThatAverage) {
if (ThatMaxGrade > MaxGrade) {
return true;
} else {
return false;
}
}
return NAN;
}
