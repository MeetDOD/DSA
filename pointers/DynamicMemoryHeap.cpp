#include <iostream>
using namespace std;

int printSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = printSum(arr, n);

    cout << "The answer is : " << ans << endl;

    // 2D array
    //  int n;
    //  cout<<"Enter the size of the array : ";
    //  cin>>n;

    // int ** arr = new int*[n];

    // for(int i = 0; i<n;i++){
    //     arr[i] = new int[n];
    // }

    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // releasing the memory heap

    // for(int i = 0; i<n;i++){
    //     delete [] arr[i];
    // }

    delete[] arr;

    return 0;
}