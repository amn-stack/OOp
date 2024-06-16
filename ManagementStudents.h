#ifndef MANAGEMENTSTUDENTS_H
#define MANAGEMENTSTUDENTS_H
#include "students.h"
#include "management.h"
class MStudents : public Management<Student*> {
 static vector<Student*> managed ;
 public :
 void Edit ( int ) override ;
 friend class Course ;
 void Abscent ( int , string ) ; // FUNCTION USED TO ASSIGN ABSENCES TO STUDENT OF THE SCHOOL WE CAN OPTIMIZE IT BY MAKE IT WORKING BY NAMES IT TAKES THE ID THEN WE HAVE TO BE SURE THAT IN OUR PROGRAM WE HAVE FILES OF ALL THE STUDENTS IT TAKES THE NUMBER OF THE ID THEN SEARCH FOR THE COURSE THAT THIS STUDENT HAS MISSED AFTER IT WILL ADD * TO IDENTIFY THE ABSENCE
} ;
vector<Student*> MStudents::managed;
#endif