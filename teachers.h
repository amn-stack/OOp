#ifndef TEACHERS_H
#define TEACHERS_H
#include "person.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std ;
class Teacher : public Person {
 public :
 Teacher ( ) = default ;
 Teacher ( const string& ) ;
 //void GetAll ( ) override ;
 //friend class course ; 
 void SetCourses ( Course* course )  ;
 void SetAll ( ) override ;
} ;
#endif