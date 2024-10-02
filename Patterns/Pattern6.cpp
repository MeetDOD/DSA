#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            char name = 'a' + j;
            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}

// output
//  a b c d e
//  a b c d e
//  a b c d e
//  a b c d e
//  a b c d e