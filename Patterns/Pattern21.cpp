#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {

        // print space
        for (int j = 0; j < 5 - i; j++)
        {
            cout << " ";
        }

        // print *
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// output
//      *
//     ***
//    *****
//   *******