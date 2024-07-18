#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 2;

    bool ans = binarySearch(arr, 0, 5, key);

    if (ans)
    {
        cout << "The key is present in the array";
    }
    else
    {
        cout << "The key is not present in the array";
    }

    return 0;
}