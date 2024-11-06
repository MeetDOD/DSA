#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int number1;
    int number2;

    cout << "Enter the start number : ";
    cin >> number1;

    cout << "Enter the end number : ";
    cin >> number2;

    for (int i = number1; i <= number2; i++)
    {
        if (isPrime(i) && i != 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}