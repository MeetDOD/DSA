// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {

//     int arr[5] = {99999, 999, 9, 9999, 99};

//     printArray(arr, 5);
//     bubbleSort(arr, 5);
//     printArray(arr, 5);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {5, 4, 3, 2, 1};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int counter = 0;
    while (counter < arr.size())
    {
        for (int i = 0; i < arr.size() - counter - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}