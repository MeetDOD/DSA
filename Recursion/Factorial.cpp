#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0) return 1; //if no base condition then segmentation fault
    return n * factorial(n - 1);
}

int power(int n){
    if(n == 0) return 1;
    return 2 * power(n - 1);
}

void print(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    print(n - 1);
}

void print1(int n){
    if(n == 0){
        return;
    }
    print1(n - 1);
    cout<<n<<" ";
}

int main() {
    
    cout<<"Enter the number : ";
    int n;
    cin >> n;
    
    int ans = factorial(n);
    int ans2 = power(n);
    
    cout<<"The factorial is : " << ans <<endl;
    cout<<"The power of 2 is : " << ans2 <<endl;
    print(n);
    cout<<endl;
    print1(n);
    
    return 0;
}