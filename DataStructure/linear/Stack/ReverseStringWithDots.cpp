#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str)
{
    stack<string> st;
    string temp = "";
    string result = "";

    for (char ch : str)
    {
        if (ch == '.')
        {
            if (!temp.empty())
            {
                st.push(temp);
                temp = "";
            }
        }
        else
        {
            temp = temp + ch;
        }
    }

    if (!temp.empty())
    {
        st.push(temp);
    }

    while (!st.empty())
    {
        result += st.top();
        st.pop();
        if (!st.empty())
        {
            result += ".";
        }
    }

    return result;
}

int main()
{
    string str1 = "i.like.this.program.very.much";
    string str2 = "..geeks..for.geeks.";

    cout << "Input: " << str1 << endl;
    cout << "Output: " << reverseWords(str1) << endl;

    cout << "Input: " << str2 << endl;
    cout << "Output: " << reverseWords(str2) << endl;

    return 0;
}
