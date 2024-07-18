#include <iostream>
using namespace std;

void printThePointer(int * p){
    cout<<"The address is : "<<p<<endl;
    cout<<"The value is : "<<*p<<endl;
}

void updateThePointer(int * p){
    // p = p + 1; //not update the value
    *p = *p + 1;
    cout<<*p<<endl;
}

int main() {
    
    int pointer = 10;
    
    int * pTi = &pointer;
    
    printThePointer(pTi);
    updateThePointer(pTi);
    
    cout<<pointer<<endl; //11 value
    
    return 0;
}