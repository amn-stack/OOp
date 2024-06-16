#include "Management.h"
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <vector>
template < class T >
void Management < T > :: Add (  ) {                 // FUNCTION THAT ADD NEW OBJECT BY CHECKING FIRST FOR THE EMPTY SPACES TO COMPLETE THEM OTHERWISE IT WILL ADD FROM THE END
try { 
    T* added_object = new T( ) ;
    for ( int i = 0 ; i < managed.size( ) ; i++ ) {
        if ( managed[ i ] == nullptr ) {
            managed[ i ] = added_object ;
            managed[ i ] -> SetId( i + 1 ) ;
            managed[ i ] -> SetAll ( ) ;
            return ;
        } 
    }
} catch ( bad_alloc & e ) {
    cerr << " failed to allocate memory " << e.what ( ) ;
 } managed.push_back( added_object ) ;
}
template < class T >
void Management < T > :: Delete ( int Id ) {          // IN MY PROGRAM THE ID IS THE SAME AS THE INDEX
bool found = false ;
try {
    if ( id < 1 || id > managed.size( ) || managed[ i ] == nullptr ) throw out_of_range ( " out of range Id " ) ;
       for ( int i = 0 ; i < managed.size( ) ; i++ ) {
           if ( managed[ i ] -> GetId( ) == id ) {
              delete managed[ i ] ;
              managed[ i ] = nullptr ;
              found = true ;
              break ;
            }
        }
if ( !found ) cerr << " the provided ID is invalid " ;
} catch ( out_of_range& e ) {
    cerr << " Delete operation failed : " << e.what ( ) ;
   }
}
template < class T >
vector< T >&  Management < T > :: GetManaged (  ) {
 return managed ;
}
template < class T >
Management < T > :: Management ( ) {
  SetAll ( ) ;
}