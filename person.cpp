#include "person.h"
void Person :: SetFullName ( string Full_name ) {
     this -> Full_name = Full_name ;
}
string Person  :: GetFullName ( ) {
    return Full_name ;
}
/*/void Person :: SetCourses ( Course* course ) {
     Courses.push_back( course ) ;  
}/*/
void Person  :: GetCourses ( ) {
    for ( Course* C : Courses ) cout << C -> GetName ( ) << " "  << endl ;
}
vector<Course*>& Person :: ReturnCourses ( ) {
    return Courses ;
}
void Person  :: SetId ( int Id ) {
    this -> Id = Id ;
}
int Person  :: GetId ( ) {
    return Id ;
}
/*/void Person  :: SetAll ( ) {                         // NEEDED WHEN ADDING WE HAVE TO SET THE OBJECTS
    int number ;
    cout << " you need to enter the FULL NAME : " ;
    cin  >> Full_name ;
    cout << " you need to enter the courses and the number of courses you wanna add " ;
    cin  >> number ;
    for ( int i = 0 ; i < number ; i++ ) {
        cout << " enter the course number " << i + 1 << endl ;
        Course* c = new Course( ) ;
        SetCourses ( c ) ;
    }
}/*/
void Person  :: GetAll ( ) {
     cout << " the FULL NAME  is : " << Full_name ;
     cout << " the ID is : " << Id ;
     cout << " the COURSES studied are : " ;
     GetCourses ( ) ;
}
void Person :: CleaningCourses ( ) {
    for ( Course* C : Courses ) {
        delete C ;
    }
    Courses.clear( ) ;
}
Person :: ~Person ( ) {
    CleaningCourses( ) ;
}