#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> arr = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};

    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    ans.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        if (ans.back()[1] >= arr[i][0])
        {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
        else
        {
            ans.push_back(arr[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }

    return 0;
}