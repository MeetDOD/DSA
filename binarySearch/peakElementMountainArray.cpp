#include <iostream>
using namespace std;

int peakEleInMountainArray(int arr[], int n){
    int start = 0;
    int end = n - 1;
    int mid;
    while(start<=end){
        // mid = start + (end-start)/2;
        mid = end + (start - end)/2;
        //Peak element milgaya
        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]){
            return mid;
        }
        
        //right side javoo
        else if(arr[mid] > arr[mid - 1]){
            start = mid + 1;
        }
        //left side javoo
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    
    int arr[6] = {1,2,11,9,8,6};

    int ans = peakEleInMountainArray(arr,6);
    
    cout<<"The Peak Element in the mountaion is at Index : "<<ans<<endl;
        
    return 0;
}