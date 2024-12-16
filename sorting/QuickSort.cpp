#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

int partition(vector<int> &arr, int start, int end)
{

    int pivot = arr[end];

    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, end);

    return i + 1;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot + 1, end);
    }
}

int main()
{

    vector<int> arr = {6, 3, 9, 5, 2, 8, 7};

    int n = arr.size() - 1;

    quickSort(arr, 0, n);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}