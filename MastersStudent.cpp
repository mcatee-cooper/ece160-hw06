#include "MastersStudent.h"
#include <sstream>
#include <iostream>
#include <stdio.h>

// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
  int i = _ms_grades.size();
  float gpaSum = 0;
  while(i != 0) {
    i--;
    gpaSum += _ms_grades.at(i);
  }
  float gpa = gpaSum / _ms_grades.size();
  return gpa;
}

void MastersStudent::addMsGrade(float grade) {
  _ms_grades.push_back(grade);
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
  Student::printInfo();{
    std::stringstream line3;
    line3 << "MS " << Student::majorString(getMajor()) << ": " << std::to_string(_ms_grad_year);
    std::cout << line3.str() << std::endl;
    printf("MS GPA: %.2f\n", getMsGpa());
  }
}
