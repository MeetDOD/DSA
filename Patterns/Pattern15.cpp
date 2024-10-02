#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 5 - (j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}

// output
//  5
//  5 4
//  5 4 3
//  5 4 3 2