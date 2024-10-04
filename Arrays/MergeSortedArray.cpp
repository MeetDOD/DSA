#include <iostream>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n) // copy arr1 to arr3
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m) // copy arr2 to arr3
    {
        arr3[k] = arr2[j];
        k++;
        j++;
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

    int arr1[5] = {1, 3, 4, 5, 10};
    int arr2[5] = {2, 6, 7, 8, 9};
    int arr3[10] = {0};

    mergeArray(arr1, 5, arr2, 5, arr3);
    printArray(arr3, 10);

    return 0;
}