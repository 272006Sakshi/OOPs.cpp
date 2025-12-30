// multi path inheritance: same information multiple path se aata hai

// we learn about "virtual"
// yha multiple copies create ho rhi thi name and age ka function identify nhi kar paa rha tha and virtual keyword solve this problem
// virtual lagane se wo name ko ek hi baar inherit kiya
class Human{
    public:
    string name;
    
    void display(){
        cout<<"my name is: "<<name<<endl;
    }
};
class Engineer: public virtual Human
{
    
    public:
    string specializatoin;
    
    void work(){
        cout<<"I have specialization in "<<specializatoin<<endl;
        
    }
    
    
};
class Youtuber: public virtual Human
{
    public:
    int subscribers;
    
    void contentcreator(){
        cout<<"I have subscriber base of "<<subscribers;
    }
    
    
};


class CodeTeacher: public Engineer, public Youtuber
{
    public:
    int salary;
    
    //default constructor
    CodeTeacher(){
        
    };
    
    CodeTeacher(string name, string specializatoin, int subscribers, int salary){
        this->name = name;
        this->specializatoin = specializatoin;
        this->subscribers = subscribers;
        this->salary = salary;
    }
    
    
};
int main()
{
    
    CodeTeacher A1("Sakshi", "dsa", 5000, 500);
    A1.display();
}
