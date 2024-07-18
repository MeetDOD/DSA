#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[4] = {5, 4, 3, 2};

    printArray(arr, 4);

    cout << endl;

    reverseArray(arr, 4);

    printArray(arr, 4);

    return 0;
}