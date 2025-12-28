#include<iostream>
using namespace std;

//Abstraction: Displaying only essential Information & hiding the details
// hume bss apne kaam se mtlb ho back me koi function kya kar rha hai koi matlab nhii wo hide bhi ho sakti hai
// for example: pow(2, 4) -- mujhe bss result se mtlb hai. pow function kaise kaam kr rha hai usse koi mtlb nhi hai
// sort(arr.begin(), arr.end())
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
