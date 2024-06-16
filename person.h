#ifndef PERSON_H
#define PERSON_H
#include "courses.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std ;
class Person {
 private :
 int Id ;
 string Full_name ;
 vector<Course*> Courses ;
 public :
 Person ( ) = default ;
 virtual ~Person ( )  ; // VIRTUAL DESTRUCTOR
 void SetFullName ( string ) ; // SET THE NAME OF THE PERSON
 string GetFullName ( ) ; // GET THE NAME OF THE PERSON
 //virtual void SetCourses ( Course* ) = 0 ;
 void GetCourses ( ) ; // GET THE NAME OF THE COURSES
 void SetId ( int ) ; 
 int GetId ( ) ;  // GET ID 
 virtual void SetAll ( ) = 0 ; // DECLARED AS PURE SINCE WE WILL OVERRIDE IT FOR THE SUBCLASSES
 virtual void GetAll ( ) ;  // GET ALL THE INFORMATION  
 vector<Course*>& ReturnCourses ( ) ;  // TO BE ABLE TO SET THE COURSES FROM THE DERIVED CLASSES
 void CleaningCourses ( ) ; // USED WHEN WE WANT TO CHNAGE THE COURSES OR IN THE DESTRUCTOR
} ;
#endif