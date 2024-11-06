#include <iostream>
using namespace std;

int main() {
    
    int number;
    
    cout<<"Enter the number to check : ";
    cin>>number;
    
    if(number % 2 == 0){
        cout<<"The number is even"<<endl;
    }else{
        cout<<"The number is odd"<<endl;
    }

    return 0;
}