#include "StudentDatabase.h"
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <map>

// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
  _students[s->getLast()] = s;
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string last_name) {
  if (_students.find(last_name) == _students.end()) {
    printf("%s not found\n",last_name.c_str());
  }
  else {
    _students[last_name]->printInfo();
  }
}
 
