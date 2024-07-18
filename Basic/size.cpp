#include <iostream>
using namespace std;
// 1 byte = 8 bit
// ASCII VALUE, A = 65, a = 97
int main()
{
    cout << "Size of CHAR: " << sizeof(char) << " byte" << endl; // char a = 'ab' wrong, char a = 'm' right
    cout << "Size of INT: " << sizeof(int) << " bytes" << endl;
    cout << "Size of SHORT: " << sizeof(short) << " bytes" << endl;
    cout << "Size of LONG: " << sizeof(long) << " bytes" << endl;
    cout << "Size of LONG LONG: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of FLOAT: " << sizeof(float) << " bytes" << endl;
    cout << "Size of DOUBLE: " << sizeof(double) << " bytes" << endl;
    cout << "Size of LONG DOUBLE: " << sizeof(long double) << " bytes" << endl;
    cout << "Size of BOOL: " << sizeof(bool) << " byte" << endl;
    cout << "Size of INT*: " << sizeof(int *) << " bytes" << endl;
    unsigned int a = 7; // stores + number if -7 it will give big number
    return 0;
}

// if you put bigger value in smaller value then it will put the some last bit

// How to store - number, just take 2's complement