#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter the value" << endl;
    cin >> a;

    if (a >= 'A' && a <= 'Z')
    {
        cout << "The Enter char is uppercase";
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "The Enter char is lowercase";
    }
    else if (a >= '0' && a <= '9')
    {
        cout << "The Enter char is a number";
    }
}