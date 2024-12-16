#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[5] = {1, 1, 3, 4, 5};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The Largest element in the array is : " << largest << endl;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != largest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "The Second largest element in the array is : " << secondLargest << endl;

    return 0;
}