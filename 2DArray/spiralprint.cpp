#include <iostream>
using namespace std;

int main()
{                              //  0 1 2
    int a[3][3] = {{1, 2, 3},  // 0
                   {4, 5, 6},  // 1
                   {7, 8, 9}}; // 2

    int c = 3;
    int r = 3;

    int i;
    int left = 0;
    int right = c - 1;
    int top = 0;
    int bottom = r - 1;

    while (left <= right && top <= bottom)
    {
        for (i = left; i <= right; ++i)
        {
            cout << a[top][i] << " ";
        }
        top++;

        for (i = top; i <= bottom; ++i)
        {
            cout << a[i][right] << " ";
        }
        right--;

        if (top <= bottom)
        {
            for (i = right; i >= left; --i)
            {
                cout << a[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right)
        {
            for (i = bottom; i >= top; --i)
            {
                cout << a[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}