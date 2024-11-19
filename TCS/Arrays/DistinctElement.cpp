#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 2, 5, 2, 10, 7, 2, 8};

    sort(v.begin(), v.end());

    int i = 1;
    int count = 0;

    while (i <= v.size())
    {
        if (v[i] != v[i - 1])
        {
            count++;
        }
        i++;
    }

    cout << "The distinct element in array is : " << count << endl;

    return 0;
}