#include <iostream>
using namespace std;

class Human{
    
    public:
    string name;
    
    private:
    int age;
    
    protected:
    int weight;
    
    void func(){
        name = "Maya";
        age = 15;
        weight = 20;
    }
};

int main()
{
   Human S;
   S.name = "Sakshi";
   cout<<S.name<<endl;
//   S.age = 10;
    // S.weight=8;    
   
}
