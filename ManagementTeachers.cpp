#include "ManagementTeachers.h"
void TManagement :: Edit ( int id ) {
 try {
        if ( id < 1 || id > GetManaged( ).size( ) || GetManaged( )[ id ] == nullptr ) throw out_of_range ( " out of range Id " ) ; 
        GetManaged( )[ id - 1 ] -> SetAll ( ) ;
    } catch ( out_of_range& e ) {
        cerr << " Edit Operation failed : " << e.what ( ) ;
    }
}