#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + (end-start)/2);

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int oddArr[5] = {1, 2, 3, 4, 5};
    int evenArr[6] = {7, 14, 21, 28, 35, 42};

    int oddAnswer = binarySearch(oddArr, 5, 4);
    int evenAnswer = binarySearch(evenArr, 6, 21);

    cout << "The Odd array key is at Index: " << oddAnswer << endl;
    cout << "The Even array key is at Index: " << evenAnswer << endl;

    return 0;
}
