#include <iostream>
using namespace std;

int firstOccerence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastOccerence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{

    int even[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 4};

    int FO = firstOccerence(even, 10, 3);
    int LO = lastOccerence(even, 10, 3);

    int totalNumberofOccurence = (LO - FO) + 1;

    cout << "The first Occerence is at index : " << FO << endl;
    cout << "The last Occerence is at index : " << LO << endl;
    cout << "The Key is repeating : " << totalNumberofOccurence << " times" << endl;

    return 0;
}