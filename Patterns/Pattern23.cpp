#include <iostream>
using namespace std;

int main()
{

    for (int i = 5; i >= 1; i--)
    {

        // print space

        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        // print *
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}

// output
//  *********
//   *******
//    *****
//     ***
//      *