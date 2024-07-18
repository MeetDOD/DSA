#include <iostream>
#include <vector>
using namespace std;

void print2DArray(int arr[][3], int row, int col){
    cout<<"Original 2D array is : "<<endl;
    
    for(int row = 0; row<3;row++){
        for(col = 0; col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    } 
}

void wavePrint(int arr[3][3], int m, int n){
    cout<<"The wave pattern print is : ";
    
    for (int col = 0; col < n; col++) {
        if (col % 2 == 0) {
            //even
            for (int row = 0; row < m; row++) {
                cout << arr[row][col] << " ";
            }
        }
        //odd
        else {
            for (int row = m - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main() {
    
    int arr[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    
    print2DArray(arr,3,3);
    wavePrint(arr,3,3);
    
    return 0;
}