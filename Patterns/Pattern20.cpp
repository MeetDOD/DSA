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
        for (int j = 1; j <= i; j++)
        {
            cout << j + (5 - i);
        }
        cout << endl;
    }

    return 0;
}

// output
//      5
//     45
//    345
//   2345
//  12345