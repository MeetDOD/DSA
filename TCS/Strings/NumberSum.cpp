#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int sum = 0;
    int currentNum = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            currentNum = currentNum * 10 + (str[i] - '0');
        }
        else
        {
            sum = sum + currentNum;
            currentNum = 0;
        }
    }

    sum = sum + currentNum;

    cout << sum << endl;

    return 0;
}