#include <bits/stdc++.h>
using namespace std;

// Stock Buy and Sell : Multiple Transaction Allowed

int main()
{

    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};

    int profit = 0;

    for (int i = 0; i < prices.size() - 1; i++)
    {
        if (prices[i + 1] > prices[i])
        {
            profit = profit + prices[i + 1] - prices[i];
        }
    }

    cout << "The profit is : " << profit << endl;

    return 0;
}