#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string name = "god.is.good";

    stack<string> st;
    string ans = "";
    string temp;

    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] != '.')
        {
            temp = temp + name[i];
        }
        else
        {
            st.push(temp);
            temp = "";
        }
    }

    st.push(temp);

    while (st.size() > 0)
    {
        if (st.size() > 1)
        {
            ans = ans + st.top() + '.';
            st.pop();
        }
        else
        {
            ans = ans + st.top();
            st.pop();
        }
    }

    cout << ans << endl;

    return 0;
}