// Copyright Inan Ismailov 2019 8e8a4cef-6f1d-4fec-accf-5a43cb2ea2b4
#include "parse_scores.h" // NOLINT
int get_num_grades(int id, const std::string values[], int size ) {
int numGrades = -5;
int counter = 0;
int u = 0;
while(!(values[u].empty())) {
counter++;
u++;
}
if (counter > size) {
return -10;
}
for (int i = 0; i < size; ++i) {
if (stoi(values[i]) == id) {
numGrades = stoi(values[i+1]);
}
}
if (numGrades == -5) {
return -1;
} else {
return numGrades;
}
}
////////////////////////////////////////////////////////////////////////////////////
int get_grades(int id, const std::string values[], int size, double grades[]) {
int counter = 0;
int u = 0;
while(!(values[u].empty())) {
counter++;
u++;
}
int numGrades = -1;
if (counter > size) {
return -10;
}
for (int i = 0; i < size; ++i) {
if ((stoi(values[i]) == id)) {
numGrades = (std::stoi(values[i+1]));
for (int j = 0; j < numGrades; ++j) {
grades[j] = (std::stod(values[i+2+j]));
}
}
}
return numGrades;
}
////////////////////////////////////////////////////////////////////////////////////
double get_grade(int id, int grade_index,const std::string values[],int size) { //NOLINT
int counter = 0;
int u = 0;
while(!(values[u].empty())) {
counter++;
u++;
}
if (counter > size) {
return -10;
}
for (int i = 0; i < size; ++i) {
if (stoi(values[i]) == id) {
true;
} else {
return -1;
}
}
int gradeindex = -2;
/* Description:
 *   Extracts a single grade for a given student and given grade index.
 * Preconditions:
 * - Parameter values has at least parameter size elements.
 * Parameters:
 * - id: the id of the student for which number of grades is returned
 * - grade_index: index of the grade to be returned for matching student
 * - values: a series of string input representing students and grades
 * - size: number of elements in values array
 * Returns:
 * - Grade selected
 * - Integer -1 when student is not found
 * - Integer -2 when grade_index is not found
 * - Integer -10 when values format is corrupt
 */
return gradeindex;
}
int get_max_grade_id(const std::string values[], int size) {
int counter = 0;
int u = 0;
while(!(values[u].empty())) {
counter++;
u++;
}
if (counter > size) {
return -10;
}
int maxID = -1;
/* Description:
 *   Extracts the id of the student with the highest grade.
 * Preconditions:
 * - Parameter values has at least parameter size elements.
 * Parameters:
 * - values: a series of string input representing students and grades
 * - size: number of elements in values array
 * Returns:
 * - The id of the student with the highest grade.
 * - Integer -1 when no students exist
 * - Integer -2 when no grades exist
 * - Integer -10 when the format is corrupt i.e. 1 1234 3 99.7 82.1
 */ 
return maxID;
}
double get_max_grade(const std::string values[], int size) {
int counter = 0;
int u = 0;
while(!(values[u].empty())) {
counter++;
u++;
}
if (counter > size) {
return -10;
}
int maxGrade = -2;
/* Description:
 *   Extracts the highest grade.
 * Preconditions:
 * - Parameter values has at least parameter size elements.
 * - Grades are nonnegative. Adjust accordingly.
 * Parameters:
 * - values: a series of string input representing students and grades
 * - size: number of elements in values array
 * Returns:
 * - The highest grade found.
 * - Integer -1 when no students exist
 * - Integer -2 when no grades exist
 * - Integer -10 when the format is corrupt i.e. 1 1234 3 99.7 82.1
 */ 
return maxGrade;
}
int get_student_ids(const std::string values[], int size, int ids[]) {
int counter = 0;
int u = 0;
while(!(values[u].empty())) {
counter++;
u++;
}
if (counter > size) {
return -10;
}
int numGrades = 5;
/* Description:
 *   Parses the values array to extract all student ids. Stores the values in
 *   the parameter ids
 * Preconditions:
 * - Parameter values has at least parameter size elements
 * - Parameter ids is large enough to hold all student id values
 * Postconditions:
 * - Parameter ids has the integer values of the corresponding student ids.
 * Parameters:
 * - values: a series of string input representing students and grades
 * - size: number of elements in values array
 * - ids: an input parameter into which student ids are stored
 * Returns:
 * - Number of grades parsed
 * - Integer -10 if format corrupt i.e. 2 1234 1 99.2 2345
 */ 
return numGrades;
}
