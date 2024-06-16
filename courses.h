#ifndef COURSES_H
#define COURSES_H
//#include "ManagementTeachers.h"
//#include "ManagementStudents.h"
#include <string>
#include <vector>
using namespace std ;
class Course {
 private :
 string Full_name ;
 //vector<Teacher *> Teachers ;
 //vector<Student *> Students ;
 public : 
 string GetName ( ) ;
 //void AddedStudents ( ) ;
 //void AddesTeachers ( ) ;
 Course ( const string& ) ;
 Course ( ) = default ;
} ;
#endif