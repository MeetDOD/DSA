#include <iostream>
using namespace std;

class Hero{
    
    public:
    
    Hero(){
        cout<<"I am a constructor bro"<<endl;
    }
    
    ~Hero(){
        cout<<"Destructor called bro"<<endl;
    }
};

//In static allocation => destructor is called automatically
//In dynamic allocation => destructor is called manually

int main() {
    
    Hero h1; //static
    
    Hero * h2 = new Hero; //dynamic 
    delete h2;

    //Const keyword
    const int a = 10;
    cout<<a<<endl;
    
    // const int a; //If you try to initialize the const variable without assigning an explicit value then a compile-time error (CTE) is generated. 
    
    // int b = 100;
    // a = b; //error: assignment of read-only variable 'a'
    
    // cout<<a<<endl;

    return 0;
}