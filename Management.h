#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "courses.h"
#include <vector>
#include <fstream>
#include <sstream>
using namespace std ;
template < class T >
class Management {
 private :
 //vector< T > managed ;
 public :
 Management ( )  ;
 virtual ~Management ( ) = default ;  
 void Add (  ) ;
 void Delete ( int ) ;
 virtual void Edit ( int ) = 0 ;
 vector< T >& GetManaged(  ) ;
} ;
#include "Management.cpp" 
#endif