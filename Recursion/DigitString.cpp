#include <iostream>
using namespace std;

void digitToString(int n, string str[])
{

    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;

    digitToString(n, str);

    cout << str[digit] << " ";
}

int main()
{

    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "The string of the digit is : ";

    digitToString(n, str);

    return 0;
}