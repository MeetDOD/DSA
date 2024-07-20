#include <iostream>
using namespace std;

int peakElementInMountainArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{

    int arr[] = {1, 2, 6, 1, 2, 3};
    int size = 6;
    cout << "The peak element in the array is : " << peakElementInMountainArray(arr, size) << endl;

    return 0;
}