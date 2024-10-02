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
            char name = 'A' + j;
            cout << name;
        }
        cout << endl;
    }

    return 0;
}

// output
//       A
//      AB
//     ABC
//    ABCD
//   ABCDE