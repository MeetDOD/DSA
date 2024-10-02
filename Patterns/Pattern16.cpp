#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 6; i++)
    {
        // for space
        for (int j = 0; j < 6 - i; j++)
        {
            cout << " ";
        }

        // for stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// output
//       *
//      **
//     ***
//    ****
//   *****