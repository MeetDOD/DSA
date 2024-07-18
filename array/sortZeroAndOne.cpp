#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortedArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{

    int arr[5] = {1, 0, 0, 1, 1};

    printArray(arr, 5);
    sortedArray(arr, 5);
    printArray(arr, 5);

    return 0;
}