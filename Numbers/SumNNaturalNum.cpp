#include <iostream>
using namespace std;

int main() {
    
    int number;
    
    cout<<"Enter the number to check : ";
    cin>>number;
    
    int sum = 0;
    
    for(int i = 1 ; i <= number ; i++){
        sum = sum + i;
    }
    
    cout<<"The sum of first N natural numbers is : "<<sum<<endl;

    return 0;
}