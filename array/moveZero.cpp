#include <iostream>
using namespace std;

void movesZero(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void printArray(int arr3[], int q)
{
    for (int i = 0; i < q; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[5] = {1, 0, 0, 5, 10};

    printArray(arr, 5);
    movesZero(arr, 5);
    printArray(arr, 5);

    return 0;
}