#include <iostream>
using namespace std;

int binarySqrt(int x){
    int start = 0;
    int end = x;
    int ans;
    
    while(start<=end){
        
        int mid = start + (end - start)/2;
        
        if(x==0){
            return 0;
        }
        
        if(x==1){
            return 1;
        }

        if(mid * mid == x){ // mid = x / mid
            return mid;
        }
        else if(mid * mid < x){ // mid = x / mid
            ans = mid;
            start = mid + 1;
        }
        else if(mid * mid > x){ // mid = x / mid
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    
    int number = 2;

    cout<<"The Square root of number is : "<<binarySqrt(number);

    return 0;
}