#include <iostream>
using namespace std;

int main()
{

    // mcq

    // normal
    // it will not change the value
    int num = 5;
    int a = num;
    cout << "a before is : " << num << endl;
    a++;
    cout << "a after is : " << num << endl;

    // with pointer it will chnage the value
    int *p = &num;
    cout << "a before is : " << num << endl;
    (*p)++;
    cout << "a after is : " << num << endl;

    // copying a pointer
    int *copy = p;
    cout << p << " - " << copy << endl;
    cout << *p << " - " << *copy << endl;

    // quality code to put ( )
    int i = 9;
    int *m = &i;
    // cout<< *m++ <<endl; //not this
    cout << (*m)++ << endl; // quality good code to put ( )

    return 0;
}