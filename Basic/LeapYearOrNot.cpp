#include <iostream>
using namespace std;

int main() {
    
    int year;
    cout << "Enter the year to check is leap year or not : ";
    cin >> year;
    
    if(year % 400 == 0){
        cout<<"The year is Leap year"<<endl;
    }
    else if(year % 4 == 0 && year % 100 != 0){
        cout<<"The year is Leap year"<<endl;
    }
    else{
        cout<<"The year is not a leap year"<<endl;
    }

    return 0;
}