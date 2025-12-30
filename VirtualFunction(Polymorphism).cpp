//Polymorphism (Virtual function)

#include <iostream>
using namespace std;

class Animal{
    public:
    // without virtual function: it will print "Hu Hu"
    
    // void speak(){
    //     cout<<"Hu Hu"<<endl;
        
    // }
    
    // with virtual function: it will print "Bark"
    virtual void speak(){
        cout<<"Hu Hu"<<endl;
        
    }
};
class Dog:public Animal
{
    public:
    void speak(){
        cout<<"Bark"<<endl;
    }
    
    // ye function call karne par error aayega kyuki parent class me iss name ka koi function nhi hai
    // aur main function me p Animal ko point kar rha hai aur wo ussi ke function ko call kar sakta hai
    void run(){
        cout<<"fast"<<endl;
    }
    
};

class Cat: public Animal
{
    void speak(){
        cout<<"Meow"<<endl;
    }
};

int main()
{
    // Animal *p;
    // p = new Dog();
    // p->speak();
    // p->run();
    
    // itna code likhne ki jarurat kyu hum ye bhi kar sakte hai:
    Dog d1;
    d1.speak();
    
    //answer
    Animal *p;
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    
    for(int i = 0; i<animals.size(); i++){
        p = animals[i];
        p->speak();
    }
    
}
