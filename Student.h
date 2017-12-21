#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>
#include <vector>

enum class Major {EE, ME, CE, CHE, BSE, ART, ARCH};

class Student {
  std::string _first_name;
  std::string _last_name;
  int _grad_year;
  Major _major;
  std::vector<float> _grades;
 
 public: 
  Student(std::string fn, std::string ln,
          int y, Major m);
  virtual ~Student();
  virtual std::string getLast();
  virtual float getGpa();
  virtual void addGrade(float grade);
  virtual Major getMajor();
  
  /*
   * Should print:
   * _last_name, first_name
   * _major _grad_year
   * GPA: x.xx
   */
  virtual void printInfo();

};

#endif
