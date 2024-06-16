#include "students.h"
/*/void Student :: GetAll ( ) {
     cout << " the FULL NAME  is : " << GetFullName ( ) << endl ;
     cout << " the ID is : " << GetId ( ) << endl ;
     cout << " the COURSES studied are : " ;
     GetCourses ( ) ; 
}/*/
void Student :: SetCourses ( ) {
     int size = Semester :: Modules[ semes ].size( ) ;
     for ( int j = 0 ; j < size ; j++ ) {
          ReturnCourses( ).push_back( Semester :: Modules[ semes ][ j ] ) ;
     }
}
void Student :: SetAll ( ) {
    string name_of_the_student ;
    string name_of_the_course ;
    cout << " you need to enter the FULL NAME : " ;
    cin  >> name_of_the_student ;
    SetFullName ( name_of_the_student ) ;
    cout << " you need to enter the year and the semester " ;
    cin  >> year ;
    cin  >> semes ;
    SetCourses ( ) ;
}
Student :: Student ( const string& Full_name , int year , int semes ) {
     SetFullName ( Full_name ) ;
}
void Student :: SetYear ( int Year )  {
     if ( Year < 6 && Year > 0 ) year = Year ;
}
void Student :: SetSemester ( int Semester ) {
     if ( Semester < 11 && Semester > 0 ) semes = Semester ; 
}
int Student :: GetSemester ( ) {
     return semes ;
}
int Student :: GetYear ( ) {
     return year ;
}