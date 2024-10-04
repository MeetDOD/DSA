#include <iostream>
using namespace std;

int getMaxElement(int arr[], int size)
{
    int max = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int getMinElement(int arr[], int size)
{
    int min = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int arr[100];

    int size;
    cout << "Enter the size : " << endl;
    cin >> size;
    cout << "Enter the elements in array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Your Array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int min = getMinElement(arr, size);
    int max = getMaxElement(arr, size);

    cout << "The mininmum element in your given array is : " << min << endl;
    cout << "The maximum element in your given array is : " << max << endl;

    return 0;
}