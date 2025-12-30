#include <iostream>
using namespace std;
// Hybrid Inheritance: Mixture of all Inheritance

// we'll build class:
// Student
// Boy
// girl
// male 
// female

class Student{
    public:
    
    void print(){
        cout<<"I am a student"<<endl;
    }
};

class Male{
    public:
    void printmale(){
        cout<<"i am male"<<endl;
    }
};

class Female{
    public:
    void printfemale(){
        cout<<"i am female"<<endl;
    }
};

class Boy: public Student, public Male
{
    public:
    void print1(){
        cout<<"I am a boy"<<endl;
    }
};

class Girl: public Student, public Female
{
    public:
    void print2(){
        cout<<"I am a girl"<<endl;
    }
};


int main()
{
    Girl G1;
    G1.print();
    G1.print2();
    
    Boy B1;
    B1.print();
    B1.print1();
}
