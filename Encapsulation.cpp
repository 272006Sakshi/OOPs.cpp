#include <iostream>
using namespace std;

//Encapsulation: we cannot access data directly, we access
//  data through functions 
// like, jitne bhi data, functions hai sabhi ko class ke andar likh do aut saare data ko private rakho unko method/function ke help se access lo.
// isse data me wrong value nhi jata hai, hm function me condition lga sakte hai
class Customer{
    
    string name;
    int acc_no;
    int balance;
    int age;
    
    public:
    Customer(string a, int b, int c){
        name = a;
        acc_no = b;
        balance = c;
    }
    
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }
    void widrow(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
        }
        
    }
    
    void display(){
        cout<<" "<<name<<" "<<acc_no<<" "<<balance<<" "<<age<<endl;
    }
    
    void updateAge(int y){
        if(y>0 && y<100){
            age = y;
        }
        else{
            cout<<"This age is not valid"<<endl;
        }
    }
};

int main()
{
    Customer c1("Sakshi",3, 3000);
    Customer c2("Maya", 5, 2020);
    c1.deposit(120);
    c1.updateAge(20);
    c1.display();
}
