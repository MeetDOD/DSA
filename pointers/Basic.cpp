#include <iostream>
using namespace std;

int main() {
    
    //basic of pointer
    int num = 7;
    int *ptr = &num;
    
    cout<<"Original num value is : "<<num<<endl;
    cout<<"Pointer to original num value is : "<<*ptr<<endl;
    cout<<"Without * the value of Pointer is : "<<ptr<<endl;
    cout<<"Memory address of pointer is : "<<&num<<endl;

    int *p; //pointer to int is created which is pointing to garbage value in the memory
    cout<<*p<<endl;
    
    int *pointToNull = 0;
    cout<<*pointToNull<<endl; //Segmentation fault if pointing to null
    
    return 0;
}