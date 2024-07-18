#include <iostream>
using namespace std;

void transposeMatrix(int arr[3][3], int n, int m)
{
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = row + 1; col < n; col++)
        {
            swap(arr[row][col], arr[col][row]);
        }
    }
}

void printArray(int arr[][3], int n, int m)
{

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "The original Array is : " << endl;
    printArray(arr, 3, 3);

    cout << endl;
    transposeMatrix(arr, 3, 3);

    cout << "The Array after transpose is : " << endl;
    printArray(arr, 3, 3);

    return 0;
} 