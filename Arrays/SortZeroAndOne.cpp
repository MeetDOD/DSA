#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 1, 1, 0, 0, 0, 2, 2, 2, 1};

    int i = 0;
    int j = 0;
    int k = 9;

    while (j <= k)
    {
        if (arr[j] == 1)
        {
            j++;
        }
        else if (arr[j] == 2)
        {
            swap(arr[j], arr[k]);
            k--;
        }
        else
        {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}