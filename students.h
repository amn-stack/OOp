#include "person.h"
#include "semester.h"
#ifndef STUDENTS_H
#define STUDENTS_H
class Student : public Person {
 private :
 int year ;  
 int semes ;
 public :
 Student ( ) = default ;
 Student ( const string& , int , int ) ;
 //void GetAll ( ) override ;
 //friend class course ;
 void SetCourses( ) ;
 void SetAll ( ) override ;
 void SetSemester ( int ) ;
 void SetYear ( int ) ;
 int GetYear ( ) ;
 int GetSemester ( ) ;
} ;
#endif