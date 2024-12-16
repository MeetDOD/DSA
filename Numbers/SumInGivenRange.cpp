#include <iostream>
using namespace std;

int main() {
    
    int left = 3;
    int right = 5;
    
    int sum = 0;
    
    for(int i = left ; i <= right ; i++){
        sum = sum + i;
    }
    
    cout<<"The sum of first N natural numbers is : "<<sum<<endl;

    return 0;
}