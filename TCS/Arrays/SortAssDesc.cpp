#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[] = {3, 2, 4, 1, 10, 30, 40, 20};

    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
            }
        }

        for (int j = n / 2; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << n << endl;

    return 0;
}