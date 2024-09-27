#include <iostream>
using namespace std;

int main()
{
    int binary[8] = {0};

    cout << "Enter the binary number 8 bits : ";
    for (int i = 0; i < 8; i++)
    {
        cin >> binary[i];
    }

    // 1's complement
    for (int i = 0; i < 8; i++)
    {
        binary[i] = binary[i] == 1 ? 0 : 1;
    }

    // 2's complement
    int carry = 1;
    for (int k = 7; k >= 0; k--)
    {
        if (binary[k] == 1 && carry == 1)
        {
            binary[k] = 0; // 1 + 1 = 0 carry = 1
        }

        else if (binary[k] == 0 && carry == 1)
        {
            binary[k] = 1; // 1 + 0 = 1 carry = 0
            carry = 0;
        }
    }

    cout << "The 2's complement is : ";
    for (int i = 0; i < 8; i++)
    {
        cout << binary[i] << " ";
    }

    return 0;
}
