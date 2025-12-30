#include <iostream>
using namespace std;

// 2) Multilevel Inheritance

class Person{
    protected:
    string name;
    
    public:
    void intro(){
        cout<<"hello my name is: "<<name<<endl;
        
    }
};
class Employee: public Person
{
    protected:
    int salary;
    
    public:
    void salaryMonthly(){
        cout<<"My monthly salary is: "<<salary<<endl;
    }
};
class Manager: public Employee
{
    public:
    int no_of_employee;
    
    Manager(string name, int salary, int no_of_employee){
        this->name = name;
        this->salary = salary;
        this->no_of_employee = no_of_employee;
    }
    void work(){
        cout<<"i'm leading "<<no_of_employee<<" number of empoyee"<<endl;
    }
    
    void noEmployee(){
        cout<<"No of Employee is: "<<no_of_employee<<endl;
    }
};


int main()
{
    Manager E1("Sakshi", 5000, 50);
    E1.intro();
    E1.salaryMonthly();
    E1.work();
    
}
