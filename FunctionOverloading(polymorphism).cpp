// Polymorphism
// Function Overloading
#include <iostream>
using namespace std;

class Area{
    public:
    int CalculateArea(int r){
        return 3.14*r*r;
    }
    int CalculateArea(int l, int b){
        return l*b;
    }
};

int main()
{
    Area A1;
    cout<<A1.CalculateArea(2)<<endl;
    cout<<A1.CalculateArea(2, 4)<<endl;
}
