#include <iostream>
using namespace std;

int main() {
    
    int me = 5;
    int * p = &me;
    int ** p2 = &p;
    int *** p3 = &p2;
    
    cout<<"Original Value : "<<me<<endl;
    cout<<"Single pointer : "<<p<<endl;
    cout<<"Double pointer : "<<p2<<endl;
    cout<<"Triple pointer : "<<p3<<endl;
    
    cout<<"Value * p of : "<<*p<<endl;
    cout<<"Value ** p of : "<<**p2<<endl;
    cout<<"Value *** p of : "<<***p3<<endl;

    return 0;
}