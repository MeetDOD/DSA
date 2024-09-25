#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans(5);
    stack<int> st;

    for (int i = 0; i < 5; i++)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    cout << "Original Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Next Greater Element : ";
    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}