#include <iostream>
using namespace std;

// 1) Single Inheritance
// gems: Pahle Parent class ka constructor call hota hai
// Pahle student class ka destructor call hota hai
class Human{
    protected:
    string name;
    int age;
    
    public:
    void work(){
        cout<<"i'm working"<<endl;
    }
    
    // cunstructor
    // Human(){
    //     cout<<"Hello human"<<endl;
    // }
    
    // destructor
    ~Human(){
        cout<<"Hello human"<<endl;
    }
    
};
class Student:public Human
{
    int roll_no, fees;
    
    public:
    //cunstructor
    // Student(){
    //     cout<<"Hello Student"<<endl;
    // }
    
    //destructor
    ~Student(){
        cout<<"Hello Student"<<endl;
    }
    
    // Student(string name, int age, int roll_no, int fees){
    //     this->name = name;
    //     this->age = age;
    //     this->roll_no = roll_no;
    //     this->fees = fees;
    // }
    // void display(){
    //     cout<<"student name: "<<name<<endl;
    //     cout<<"Age: "<<age<<endl;
    //     cout<<"Roll_no: "<<roll_no<<endl;
    //     cout<<"Fees: "<<fees<<endl;
    // }
};

int main()
{
    // Student S1("Sakshi", 15, 2, 500);
    // S1.display();
    Student S1;
}
