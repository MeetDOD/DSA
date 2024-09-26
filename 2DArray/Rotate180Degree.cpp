#include <iostream>
using namespace std;

int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Original Matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // 1. Column Wise Reverse
    for (int j = 0; j < 3; j++)
    {
        int start = 0;
        int end = 2;

        while (start < end)
        {
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }

    // 2. Row Wise Reverse
    for (int i = 0; i < 3; i++)
    {
        int start = 0;
        int end = 2;

        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    cout << endl;
    cout << "Rotate By 180 degree" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}