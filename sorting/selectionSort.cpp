#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i<n;i++){
        int minElement = i;
        for(int j = i + 1; j<n;j++){
            if(arr[minElement] > arr[j]){
                minElement = j;
            }
        }
        swap(arr[minElement],arr[i]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    
    int arr[5] = {9999,99999,999,9,99};
    cout<<"<-----------Original Array--------------->"<<endl;
    printArray(arr,5);
    cout<<"<-----------Selection Sort--------------->"<<endl;
    selectionSort(arr,5);
    printArray(arr,5);
    cout<<"<-----------Sorted--------------->"<<endl;

    return 0;
}