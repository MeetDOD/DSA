#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;

    // making two pointer at each array
    int leftSide = start;    // left array
    int rightSide = mid + 1; // right array

    while (leftSide <= mid && rightSide <= end)
    {
        if (arr[leftSide] <= arr[rightSide])
        {
            temp.push_back(arr[leftSide]);
            leftSide++;
        }
        else
        {
            temp.push_back(arr[rightSide]);
            rightSide++;
        }
    }

    while (leftSide <= mid)
    {
        temp.push_back(arr[leftSide]);
        leftSide++;
    }

    while (rightSide <= end)
    {
        temp.push_back(arr[rightSide]);
        rightSide++;
    }

    // copying the temp array to arr array for printing
    for (int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start == end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // left
    mergeSort(arr, start, mid);

    // right
    mergeSort(arr, mid + 1, end);

    // merging the array
    merge(arr, start, mid, end);
}

int main()
{

    vector<int> arr = {9999, 999, 99, 9, 1, 0};

    cout << "The Sorted array by merge sort is : ";

    mergeSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size() - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}