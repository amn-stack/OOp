#include "teachers.h"
/*/void Teacher :: GetAll ( ) {
     cout << " the FULL NAME  is : " << GetFullName ( ) << endl ;
     cout << " the ID is : " << GetId ( ) << endl ;
     cout << " the COURSES studied are : " ;
     GetCourses ( ) ;
}/*/
void Teacher :: SetCourses ( Course* course ) {
     ReturnCourses( ).push_back( course ) ;  
}
void Teacher :: SetAll ( ) {                         // NEEDED WHEN ADDING WE HAVE TO SET THE OBJECTS
    int number ;
    string name_of_the_teacher ;
    string name_of_the_course ;
    cout << " you need to enter the FULL NAME : " ;
    cin  >> name_of_the_teacher ;
    SetFullName ( name_of_the_teacher ) ;
    cout << " you need to enter the courses and the number of courses you wanna add " ;
    cin  >> number ;
    for ( int i = 0 ; i < number ; i++ ) {
        cout << " enter the course number " << i + 1 << endl ;
        cin  >> name_of_the_course ;
        Course* c = new Course( name_of_the_course) ;
        SetCourses ( c ) ;
    }
}
Teacher :: Teacher ( const string& Full_name ) {
 SetFullName( Full_name ) ;
}