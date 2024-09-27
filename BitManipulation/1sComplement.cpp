#include <iostream>
using namespace std;

int main()
{
    int binary[8];
    int onesComplement[8];

    cout << "Enter an 8-bit binary number (each bit separated by a space): ";
    for (int i = 0; i < 8; i++)
    {
        cin >> binary[i];
    }

    for (int i = 0; i < 8; i++)
    {
        onesComplement[i] = binary[i] == 1 ? 0 : 1;
    }

    cout << "1's complement: ";
    for (int i = 0; i < 8; i++)
    {
        cout << onesComplement[i] << " ";
    }
    cout << endl;

    return 0;
}
