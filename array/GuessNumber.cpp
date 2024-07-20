#include <iostream>
using namespace std;

int guessNumber(int arr[], int n){
    
    int totalSum = n * (n + 1)/2; // 1 + 2 + 3 = 6 sum of n natural no.
    
    int sumArray = 0;
    
    for(int i = 0 ; i < n - 1 ; i++){
        sumArray = sumArray + arr[i]; // 1 + 3 = 4 sum of array element.
    }
    
    return totalSum - sumArray; // 6 - 4 = 2
}


int main() {
    
    int arr[] = {1,3};
    int n = 2;
    
    cout<<"The missing number is : "<<guessNumber(arr,n)<<endl;

    return 0;
}