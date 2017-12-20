#include "StudentDatabase.h"
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <map>

// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
  _students.insert ( std::pair<std::string,Student*>(s->getLast(),s) );
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string last_name) {
  Student *tmp;
  tmp = _students[last_name];
  if (tmp != NULL) {
    tmp->printInfo();
  }
  else {
    printf("<last_name> not found");
  }
}
