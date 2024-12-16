#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {1,7,7,4,5};
    
    int even = 0;
    int odd = 0;
    
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    
    cout<<"The number of even numbers is : "<<even<<endl;
    cout<<"The number of odd numbers is : "<<odd<<endl;

    return 0;
}