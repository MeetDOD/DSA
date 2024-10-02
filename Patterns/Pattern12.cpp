#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char name = 'a' + i - 1;
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}

// output
//  a
//  b b
//  c c c
//  d d d d
//  e e e e e