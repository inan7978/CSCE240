// Copyright 2019 Inan Ismailov CSCE 240
// Blackboard submission reference number: 1beee0d9-7b45-4a52-aca4-331a9f7d1c7b
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
  int numStudents = 0;
  int maxId = 0;
  cin >> numStudents;
  cout << "{" << endl;
  cout << "  \"students\" : [" << endl;
  int studentId = 0;
  double maxGrade = 0;
  maxId = studentId;
for (int i = 0; i < numStudents; ++i) {
  int studentId;
  int numGrades;
  cin >> studentId;
  cin >> numGrades;
  cout << "    { \"id\" : " << studentId << ", \"grades\" : [ ";
for (int i = 0; i < numGrades; ++i) {
  double grade;
  cin >> grade;
  if (maxGrade < grade) {
  maxGrade = grade;
  maxId = studentId;
  }
  if (i + 1 == numGrades) {
  cout << grade;
  } else {
  cout << grade << ", ";
  }
  }
  if (i + 1 == numStudents) {
  cout << " ] }" << endl;
  } else {
  cout << " ] }," << endl;
  }
  }
  cout << "  ]," << endl;
  cout << "  \"max_id\" : " << maxId << "," << endl;
  cout << "  \"max_score\" : " << maxGrade  << endl;
  cout << "}";
  }
