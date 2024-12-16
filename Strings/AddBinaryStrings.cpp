#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1 = "1101";
    string s2 = "111";

    string ans = "";
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0)
    {

        int count = 0;

        if (i >= 0 && s1[i] == '1')
            count++;
        if (j >= 0 && s2[j] == '1')
            count++;

        if (count + carry == 0)
        {
            ans = ans + '0';
            carry = 0;
        }

        else if (count + carry == 1)
        {
            ans = ans + '1';
            carry = 0;
        }

        else if (count + carry == 2)
        {
            ans = ans + '0';
            carry = 1;
        }

        else if (count + carry == 3)
        {
            ans = ans + '1';
            carry = 1;
        }

        i--;
        j--;
    }

    if (carry == 1)
    {
        ans = ans + to_string(carry);
    }

    reverse(ans.begin(), ans.end());

    i = 0;

    while (ans[i] == '0')
    {
        ans.erase(0, 1);
    }

    cout << s1 << " + " << s2 << " => ";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}