#ifndef MANAGEMENTTEACHERS_H
#define MANAGEMENTTEACHERS_H
#include "Management.h"
#include "teachers.h"
class TManagement : public Management<Teacher* >  {
 static vector<Teacher*> managed ;
 public :
 void Edit ( int ) override ;
 friend class Course ;
} ;
vector<Teacher*> TManagement::managed;
#endif