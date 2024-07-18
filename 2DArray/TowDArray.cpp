#include <iostream>
using namespace std;

bool isPresnet(int arr[][3], int target, int row, int col)
{
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int arr[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}};

    // for(int i = 0; i<3;i++){
    //     for(int j = 0; j<3; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the element to search : ";
    cin >> target;

    if (isPresnet(arr, target, 3, 3))
    {
        cout << "The elemnet is present" << endl;
    }
    else
    {
        cout << "The element is not present" << endl;
    }

    return 0;
}