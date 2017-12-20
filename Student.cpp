#include "Student.h"
#include <sstream>
#include <iostream>
#include <stdio.h>

Student::Student(std::string first, std::string last, int grad, Major m) {
  _first_name = first;
  _last_name = last;
  _grad_year = grad;
  _major = m;
}

Student::~Student(){}

float Student::getGpa() {
  int i = _grades.size();
  float gpaSum = 0;
  while(i != 0) {
    i--;
    gpaSum += _grades.at(i);
  }
  float gpa = gpaSum / _grades.size();
  return gpa;
}

void Student::addGrade(float grade) {
  _grades.push_back(grade);
}

std::string Student::getLast() {
  return _last_name;
}

Major Student::getMajor() {
  return _major;
}

std::string Student::majorString(Major m) {
  std::string major;
  switch(m) {
  case Major::EE:
    major = "EE";
    return major;
  case Major::ME:
    major = "ME";
    return major;
  case Major::CE:
    major = "CE";
    return major;
  case Major::BSE:
    major = "BSE";
    return major;
  case Major::CHE:
    major = "CHE";
    return major;
  case Major::ART:
    major = "ART";
    return major;
  case Major::ARCH:
    major = "ARCH";
    return major;
  }
}

void Student::printInfo() {
  std::stringstream line1;
  line1 << _last_name << ", " << _first_name;
  std::cout << line1.str() << std::endl;
  std::stringstream line2;
  line2 << majorString(_major) << " " << std::to_string(_grad_year);
  std::cout << line2.str() << std::endl;
  printf("GPA: %.2f\n", getGpa());
}
