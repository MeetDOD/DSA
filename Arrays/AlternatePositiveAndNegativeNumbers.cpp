#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, -7, -6, -5, 10};

    vector<int> positiveVector;
    vector<int> negativeVector;
    vector<int> answer;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] >= 0)
        {
            positiveVector.push_back(arr[i]);
        }
        else
        {
            negativeVector.push_back(arr[i]);
        }
    }

    int i = 0;
    int j = 0;

    while (i < positiveVector.size() && j < negativeVector.size())
    {
        answer.push_back(positiveVector[i]);
        i++;
        answer.push_back(negativeVector[j]);
        j++;
    }

    while (i < positiveVector.size())
    {
        answer.push_back(positiveVector[i]);
        i++;
    }

    while (j < negativeVector.size())
    {
        answer.push_back(negativeVector[j]);
        j++;
    }

    for (int k = 0; k < answer.size(); k++)
    {
        cout << answer[k] << " ";
    }

    return 0;
}