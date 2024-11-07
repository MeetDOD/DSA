#include <iostream>
#include <math.h>
using namespace std;

bool isArmStrong(int num)
{
    int og = num;
    int sum = 0;
    while (num != 0)
    {
        int rem = num % 10;
        sum = sum + pow(rem, 3);
        num = num / 10;
    }
    if (sum == og)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int number1;
    cout << "Enter the start number : ";
    cin >> number1;

    int number2;
    cout << "Enter the end number : ";
    cin >> number2;

    for (int i = number1; i <= number2; i++)
    {
        if (isArmStrong(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}