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

        // for numbers
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}

// output
//       1
//      22
//     333
//    4444
//   55555