#include <iostream>
using namespace std;
class Student{
    // public:
    string name;
    int age;
    int roll_no;
    string grade;
    
    // access through methods
    public:
    void setname(string s){
        name = s;
    }
    void setage(int a){
        age = a;
    }
    void setroll(int r){
        roll_no = r;
    }
    void setgrade(string g){
        grade = g;
    }
    
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getroll(){
        cout<<roll_no<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }
};

int main()
{
    Student s1;
    // calling setter function
    s1.setname("Rohit");
    s1.setage(12);
    s1.setroll(10);
    s1.setgrade("A+");
    // calling getter function
    s1.getname();
    s1.getage();
    s1.getroll();
    s1.getgrade();
    
    
    // cout<<s1.name<<endl;
    // cout<<s1.age<<endl;
    // cout<<s1.roll_no<<endl;
    // cout<<s1.grade<<endl;
}
