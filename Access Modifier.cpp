#include <iostream>
using namespace std;

//Parent class

class Human{
    string Religion, color;
    // protected: // we can access only within the class 
    public: // accesss anywhere
    string name;
    int age, weight;
    
};

// child class
class Student: public Human
{
    private:
    int roll_no, fees;
    
    public:
    Student(string name, int age, int weight, int roll_no, int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no=roll_no;
        this->fees=fees;
    }
    
    void display(){
        cout<<name<<" age is "<<age<<" weight is "<<weight<<" roll Number "<<roll_no<<" weight is "<<weight<<"fees is"<<fees<<endl;
        
    }
    
};
class Teacher: public Human
{
    int salary, id;
};

int main()
{
   Student A("Sakshi", 15, 39, 2, 500);
   A.display();
   
   
}
