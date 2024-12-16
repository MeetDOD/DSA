#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter the number to check : ";
    cin >> number;

    if (number > 0)
    {
        cout << "The number is +" << endl;
    }
    else if (number < 0)
    {
        cout << "The number is -" << endl;
    }
    else
    {
        cout << "The number is 0" << endl;
    }

    return 0;
}