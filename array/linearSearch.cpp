#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    
    return 0;
}

int main() {
    
    int arr[7] = {1,2,3,4,5,6,7};    
    
    int key = 0;
    
    bool ans = linearSearch(arr,7,key);
    
    if(ans == 1){
        cout<<"The element is present in the array ";
    }else{
        cout<<"The element is absent in the array ";
    }

    return 0;
}