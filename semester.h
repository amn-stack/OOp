#ifndef SEMESTER_H
#define SEMESTER_H
#include "courses.h"
#include "students.h"
#include <iostream>
class Semester {
 private :
 int S ;
 static vector<Course*> Modules[ 10 ] ;
 public :
 Semester ( int ) ;
 ~Semester ( ) ;
 void AddingModules ( Course* , int ) ;
 void Display ( int ) ;
 void CleaningSemester ( ) ;
 friend class Student ;
} ;
vector<Course*> Semester::Modules[10];
#endif