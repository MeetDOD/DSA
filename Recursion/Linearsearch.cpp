#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;

    bool remainingPart = linearSearch(arr + 1, size - 1, key);
    return remainingPart;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key;
    cout << "Enter the key : ";
    cin >> key;

    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "The element is present in the Array" << endl;
    }
    else
    {
        cout << "The element is not present in the Array" << endl;
    }

    return 0;
}