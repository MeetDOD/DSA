#include <iostream>
using namespace std;

int main() {
    
    int number;
    cout<<"Enter the number : ";
    cin >> number;
    
    int reverseNumber;
    
    while(number != 0){
        int lastDigit = number % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        number = number / 10;
    }
    
    cout<<reverseNumber<<endl;

    return 0;
}