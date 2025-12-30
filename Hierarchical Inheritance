#include <iostream>
using namespace std;

//Hierarchical Inheritance
class Human{
    protected:
    string name;
    int age;
    
    public:
    //we have to create default constructor nhi to error dega
    Human(){
        
    };
    
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }
    
    void display(){
        cout<<name<<" "<<age<<" \n";
    }
};
class Student: public Human
{
    int roll_no, fees;
    
    public:
    Student(string name, int age, int roll_no, int fees):Human(name, age)
    {
        this->roll_no = roll_no;
        this->fees = fees;
    }
    
    void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
    }
};

class Teacher: public Human
{
    int salary;
    
    public:
    Teacher(int salary, string name, int age){
        this->salary = salary;
        this->name = name;
        this->age = age;
    }
    
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};

int main()
{
    Student S1("Sakshi", 15, 2, 500);
    S1.display();
    
    Teacher T1(20,"Maya", 5000);
    T1.display();
}
