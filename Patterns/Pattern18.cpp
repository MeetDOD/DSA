#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 6; i++)
    {
        // for space
        for (int j = 1; j < 6 - i; j++)
        {
            cout << " ";
        }

        // for numbers
        for (int j = 1; j < i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// output
//     1
//    12
//   123
//  1234