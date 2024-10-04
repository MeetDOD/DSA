#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6}; // 1 2 3 4 6 5

    int n = 4;

    int i = n + 0;
    int j = 5;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}