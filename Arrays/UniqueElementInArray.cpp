#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{

    int arr[5] = {1, 1, 3, 3, 7};

    int ans = findUniqueElement(arr, 5);

    cout << "The Unique element in the array is : " << ans << endl;

    return 0;
}