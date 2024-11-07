#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter the number : ";
    cin >> number;

    int og = number;
    int reverse = 0;

    while (number != 0)
    {
        int rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }

    if (og == reverse)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Non Palindrome" << endl;
    }

    return 0;
}