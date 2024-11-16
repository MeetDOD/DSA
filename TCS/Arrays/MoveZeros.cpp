#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 0, 2, 0, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}