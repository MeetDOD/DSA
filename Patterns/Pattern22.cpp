#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 5; i++)
    {

        // print space
        for (int j = 1; j < 5 - i; j++)
        {
            cout << " ";
        }

        // increasing
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // decreasing
        for (int j = i; j > 1; j--)
        {
            cout << j - 1;
        }
        cout << endl;
    }

    return 0;
}

// output
//     1
//    121
//   12321
//  1234321