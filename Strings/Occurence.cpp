#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = {'m', 'e', 'e', 't'};

    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<char, int> mp;
    vector<char> ans;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > 0)
        {
            ans.push_back(arr[i]);
            ans.push_back(mp[arr[i]] + '0');
            mp[arr[i]] = 0;
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ",";
    }

    return 0;
}
