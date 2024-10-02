#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << 5 - j << " ";
        }
        cout << endl;
    }

    return 0;
}

// output
//  4 3 2 1
//  4 3 2 1
//  4 3 2 1
//  4 3 2 1