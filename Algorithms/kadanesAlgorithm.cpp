#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, -2, 5};

    int sum = 0;
    int maxi = arr[0];

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
        maxi = max(sum, maxi);

        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxi << endl;

    return 0;
}