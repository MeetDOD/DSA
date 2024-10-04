#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{

    int arr[100];

    cout << "Enter the size of the array : ";

    int size;
    cin >> size;

    cout << "Enter the elements : " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Your array is : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    int answer = sumArray(arr, size);

    cout << "Your sum answer is : " << answer;

    return 0;
}