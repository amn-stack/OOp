#include "semester.h"
Semester :: Semester ( int S ) {
    if ( S >= 1 && S < 11 ) this -> S = S ;
}
void Semester :: AddingModules ( Course* C , int index ) {
    if (index > 0 && index <= 10)
            Modules[index].push_back(C);
}
void Semester :: Display ( int index ) {
     if (index >= 0 && index < 10) {
            cout << "Courses in vector " << index << ":" << endl ;
            for (size_t j = 0; j < Modules[index].size(); j++) {
                cout << Modules[index][j]->GetName() << endl ;
}
     }
}
Semester :: ~Semester ( ) {
    for ( int i = 0 ;  i < 10 ; i++ ) {
        for ( int j = 0 ; j < Modules[ i ].size( ) ; j++ ) delete Modules[ i ][ j ] ;
    }
}
void Semester :: CleaningSemester ( ) {
    for ( int i = 0 ; i < 10 ; i++ ) {
        Modules[ i ].clear( ) ;
    }
}