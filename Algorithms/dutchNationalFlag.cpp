#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {1, 0, 1, 2, 0, 1};

    int low = 0;
    int mid = 0;
    int high = 5;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}