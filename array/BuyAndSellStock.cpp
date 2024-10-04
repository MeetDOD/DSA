#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {7, 6, 4, 3, 1}; // 5

    int profit = 0;
    int mini = arr[0];

    for (int i = 1; i < 5; i++)
    {
        int diff = arr[i] - mini;
        profit = max(profit, diff);
        mini = min(mini, arr[i]);
    }

    cout << "Maximum Profit : " << profit << endl;

    return 0;
}