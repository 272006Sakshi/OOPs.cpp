#include <iostream>
using namespace std;

// Multiple Inheritance

class Engineer{
    // we cannot access this function bcz it is private.
    void money(){
        cout<<"Hello"<<endl;
    }
    
    public:
    string specializatoin;
    
    void work(){
        cout<<"I have specialization in "<<specializatoin<<endl;
        
    }
    
    //cunstructor
    Engineer(){
        cout<<"Hello Engineer\n";
    }
};
class Youtuber{
    public:
    int subscribers;
    
    void contentcreator(){
        cout<<"I have subscriber base of "<<subscribers;
    }
    
    //cunstructor
    Youtuber(){
        cout<<"Heloo Youtuber\n";
    }
};
// pahle parent constructor call hota hai but yha multiple parent hai to yha jis order me likha hoga uss order me call hoga 
// like: Engineer pahle hai to Engineerpahle call hoga uske baad Youtuber
class CodeTeacher: public Engineer, public Youtuber
{
    public:
    string name;
    
    //cunstructor
    CodeTeacher(){
        cout<<"Hello CodeTeacher\n";
    }
    
    CodeTeacher(string name, string specializatoin, int subscribers){
        this->name = name;
        this->specializatoin = specializatoin;
        this->subscribers = subscribers;
    }
    
    void show(){
        cout<<"My name is: "<<name<<endl;
        work();
        contentcreator();
    }
};
int main()
{
    // CodeTeacher A1("Sakshi", "DSA", 120000);
    // A1.show();
    CodeTeacher A1;
}
