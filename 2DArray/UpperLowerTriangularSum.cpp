#include <iostream>
using namespace std;

int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int lower_sum = 0;
    int upper_sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            lower_sum = lower_sum + arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 3 - 1; j >= i; j--)
        {
            upper_sum = upper_sum + arr[i][j];
        }
    }

    cout << lower_sum << endl;
    cout << upper_sum << endl;

    return 0;
}