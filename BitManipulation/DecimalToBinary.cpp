#include <iostream>
using namespace std;

int main()
{
    int decimalNumber;
    int binary[8] = {0};

    cout << "Enter a decimal number (0-255): ";
    cin >> decimalNumber;

    for (int i = 7; i >= 0; --i)
    {
        binary[i] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
    }

    cout << "Binary equivalent: ";
    for (int i = 0; i < 8; i++)
    {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
