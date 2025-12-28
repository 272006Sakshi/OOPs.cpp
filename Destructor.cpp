#include <iostream>
using namespace std;

class Customer{
    
    string name;
    int *data;
    
    public:
    
    Customer(){
        name = "sakshi";
        data = new int;
        *data = 10;
        
    }
    // destructor
    ~Customer(){
        delete data;
        cout<<" destructor is called";
    }
};
int main()
{
    Customer A1, A2, A3;
}
