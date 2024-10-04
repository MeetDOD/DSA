#include <iostream>
using namespace std;

void printArray(int meet[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << meet[i] << endl;
    }
}

void printChar(char mital[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << mital[i] << endl;
    }
}

int main()
{

    int meet[5] = {1, 2, 3, 4, 5};

    char mital[5] = {'m', 'e', 'e', 't', 'd'};

    printChar(mital, 5);

    // printArray(meet,5);

    cout << "The array is running" << endl;

    return 0;
}