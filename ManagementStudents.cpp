#include "ManagementStudents.h" 
void MStudents :: Edit ( int id ) {
    try {
        if ( id < 1 || id > GetManaged( ).size( ) || GetManaged( )[ id ] == nullptr ) throw out_of_range ( " out of range Id " ) ; 
        GetManaged( )[ id - 1 ] -> SetAll ( ) ;
    } catch ( out_of_range& e ) {
        cerr << " Edit Operation failed : " << e.what ( ) ;
    }
}
void MStudents :: Abscent ( int IdE , string Course_name ) {
    vector <Course*> C = managed[ IdE - 1 ] -> ReturnCourses( ) ;
    for ( Course* c : C ) {
        if ( c -> GetName( ) == Course_name ) {
            string filename = "\\c:\\oop_project\\Student_" + to_string( IdE ) + ".txt" ; 
            ifstream Infile ( filename ) ;
            if ( !Infile ) {
                cerr << " we can t open this file " ;
                return ;
            }
            stringstream S ;
            S << Infile.rdbuf( ) ;
            string Stringcontent = S.str( ) ;
            Infile.close( ) ;
            string Mark = "*" ;
            int pos = Stringcontent.find( Course_name ) ;
             if ( pos != string :: npos ) {
                 pos += Course_name.length( ) ;
                 Stringcontent.insert( pos , Mark ) ;
            } else {
                cerr << " The course can not be found here " ;
                return ;
            }
            ofstream OutFile( filename ) ;
            if ( !OutFile ) {
                cerr << " Failed to open file for writing: " << filename << endl ;
                return ;
            }
            OutFile << Stringcontent;
            OutFile.close();
            return;
        }
    }
}