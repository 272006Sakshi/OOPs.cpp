#include <iostream>
using namespace std;

class Customer{
    string name;
    int acc_no;
    int balance;
    
    public:
    // default constructor
    Customer(){
        // cout<<"this is default constructor";
        name  = "Sakshi";
        acc_no = 15;
        balance = 1000;
    }
    //parameterized constructor
    // Customer(string a, int b, int c){
    //     name = a;
    //     acc_no = b;
    //     balance= c;
    // }
    Customer(string a, int b){
        name = a;
        acc_no = b;
        balance = 50;
    }
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
    // Note: all above functions name are same but all take different parameter it is called constructor overloadiing
    
    // this-> keyword
    // Customer(string name, int acc_no, int balance){
    //     this->name = name;
    //     this->acc_no = acc_no;
    //     this->balance= balance;
    // }
    
    // inline constructor
    inline Customer(string a, int b, int c):name(a), acc_no(b), balance(c){
        
    }
    
    // copy constructor
    // it's costomized
    Customer(Customer &B){
        name = B.name;
        acc_no = B.acc_no;
        balance = B.balance;
    }
    
};
int main()
{
    Customer c1;
    Customer c2("Maya", 10, 1200);
    Customer c3("chhaya", 11);
    c1.display();
    c2.display();
    c3.display();
    Customer c4(c3);
    c4.display();
    Customer c5;
    c5 = c3;
    c5.display();
    
}
