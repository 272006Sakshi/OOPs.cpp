#include <iostream>
using namespace std;
class Student{
    public:
    
    string name;
    int roll_no;
    int age;
    string grade;
  
};

int main()
{
    // dynamic memory allocation
    Student *S = new Student;
    (*S).name = "Sakshi";
    (*S).age = 10;
    (*S).roll_no = 12;
    (*S).grade = "A+";
    
    // print
    cout<<S->name<<endl;
    cout<<S->age<<endl;
    cout<<S->roll_no<<endl;
    cout<<S->grade<<endl;
    
}
