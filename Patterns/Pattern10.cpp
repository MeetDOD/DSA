#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

// output
//  1
//  2 2
//  3 3 3
//  4 4 4 4