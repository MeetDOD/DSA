#include <iostream>
using namespace std;

void print2DArray(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

void sumElementInArray(int arr[][3], int row, int col)
{
    cout << "The element sum is : ";
    for (row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestElemet(int arr[3][3], int row, int col)
{
    int maxi = INT8_MIN;
    int rowIndex = -1;

    for (row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }

        if (maxi < sum)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    return rowIndex;
}

int main()
{

    int arr[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};

    print2DArray(arr, 3, 3);
    sumElementInArray(arr, 3, 3);
    int rowIndex = largestElemet(arr, 3, 3);
    cout << "rowIndex is : " << rowIndex << endl;

    return 0;
}