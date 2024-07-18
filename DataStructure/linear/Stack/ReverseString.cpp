#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void printArray(vector<char> &arr, int size){
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void reverseUsingStack(vector<char> &arr, int size){
    
    stack<char> temp;
    
    for(int i = 0; i<size;i++){
        temp.push(arr[i]);
    }
    
    int i = 0;
    
    while(!temp.empty()){
        arr[i] = temp.top();
        temp.pop();
        i++;
    }
}

int main() {
    
    vector<char> arr = {'M','E','E','T'};
    int size = 4;
    
    printArray(arr,size);
    
    reverseUsingStack(arr,size);
    
    printArray(arr,size);
    
    return 0;
}