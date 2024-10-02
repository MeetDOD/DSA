#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout << j + (1 - i) << " ";
        }
        cout << endl;
    }

    return 0;
}

// output
//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1