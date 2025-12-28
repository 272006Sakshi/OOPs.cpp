#include <iostream>
using namespace std;

// we want initally total_customer = 0;
// c1: name, acc_no, balance;
// c2: name, acc_no, balance;

class Customer{
    string name;
    int acc_no;
    int balance;
    
    // static data member: it is a part of class or attribute of class member. we can access it without object
    static int total_customer;
    static int total_balance;
    public:
   
    Customer(string a, int b, int c){
        name = a;
        acc_no = b;
        balance = c;
        total_customer++;
        total_balance+=balance;
        
    }
    
    void display(){
        cout<<name<<endl;
        cout<<acc_no<<endl;
        cout<<balance<<endl;
        cout<<total_customer<<endl;
    }
    
    void displaytotal(){
        cout<<total_customer<<endl;
    }
    
    // static member function: access static data.
    static void accesstatic(){
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }
    void widrow(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;
        }
    }
};
// static data initialiazation
int Customer :: total_customer=0;
int Customer :: total_balance=0;
int main()
{
    Customer c1("Sakshi", 3, 1000);
    Customer c2("Maya", 5, 1010);
    c1.display();
    c2.display();
    c2.displaytotal();
    Customer c3("Akanksha", 7, 1200);
    // c3.display();
    c3.displaytotal();
    
    // access without object
    // Customer::total_customer = 5;
    Customer::accesstatic();
    // Customer::accesstatic();
    c1.displaytotal();
    
    c1.deposit(200);
    c1.widrow(300);
    c1.accesstatic();
}
