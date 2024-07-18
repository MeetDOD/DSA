#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {11, 22, 33, 44, 55};

    cout << "The Address is : " << arr << endl;
    cout << "The Address is : " << &arr[0] << endl;

    cout << "The pointer is : " << *arr << endl;       // printing first element
    cout << "The pointer is : " << *arr + 1 << endl;   // increment first element by 1
    cout << "The pointer is : " << *(arr + 1) << endl; // 2nd element print

    return 0;
}