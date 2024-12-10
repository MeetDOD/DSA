#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> matrix = {{7, 10}, {5, 0}};

    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<int> x;
    vector<int> y;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                x.push_back(i);
                y.push_back(j);
            }
        }
    }

    // for row -> 0
    for (int i = 0; i < x.size(); i++)
    {
        int index = x[i];
        for (int j = 0; j < m; j++)
        {
            matrix[index][j] = 0;
        }
    }

    for (int i = 0; i < y.size(); i++)
    {
        int index = y[i];
        for (int j = 0; j < n; j++)
        {
            matrix[j][index] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}