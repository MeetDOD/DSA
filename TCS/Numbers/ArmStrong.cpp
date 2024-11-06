#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int number;
    cout<<"Enter the number : ";
    cin >> number;
    
    int og = number;
    int sum = 0;
    
    while(number != 0){
        int rem = number % 10;
        sum = sum + pow(rem,3);
        number = number / 10;
    }
    
    if(sum == og){
        cout<<"The number is ArmStrong"<<endl;
    }else{
        cout<<"The number is not ArmStrong"<<endl;
    }

    return 0;
}