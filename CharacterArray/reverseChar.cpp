#include <iostream>
using namespace std;

void reverseCharArray(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int getCharLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[50];
    cout << "Enter Your name : ";
    cin >> name;

    int length = getCharLength(name);
    cout << "The length of the char array is : " << length << endl;

    reverseCharArray(name, length);
    cout << "The reverse of the name is : " << name << endl;

    return 0;
}