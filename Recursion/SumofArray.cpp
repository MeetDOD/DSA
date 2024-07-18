#include <iostream>
using namespace std;

int getSumArray(int arr[], int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];

    int remainingPart = getSumArray(arr + 1, n - 1);
    int sum = arr[0] + remainingPart;

    return sum;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int sum = getSumArray(arr, size);

    cout << "The sum is " << sum << endl;

    return 0;
}