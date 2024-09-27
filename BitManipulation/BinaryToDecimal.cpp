#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binary[8];
    int decimalNumber = 0;

    cout << "Enter an 8-bit binary number (each bit separated by a space): ";
    for (int i = 0; i < 8; ++i)
    {
        cin >> binary[i];
    }

    for (int i = 0; i < 8; i++)
    {
        decimalNumber = decimalNumber + binary[i] * pow(2, 7 - i);
    }

    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}
