#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[5] = {1, 1, 3, 4, 5};

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "The Smallest element in the array is : " << smallest << endl;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    cout << "The Second Smallest element in the array is : " << secondSmallest << endl;

    return 0;
}