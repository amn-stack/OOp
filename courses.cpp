#include "courses.h"
string Course :: GetName ( ) {
 return Full_name ;
}
Course :: Course ( const string& name ) : Full_name( name ) { }