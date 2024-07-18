#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 2, 3};
    char chr[10] = "abcd";

    cout << "In array it will print address : " << arr << endl;
    cout << "In Character it will print whole value : " << chr << endl;

    char *c = &chr[0];

    cout << "To print single value : " << *c << endl;

    char temp = 'z';
    char *pT = &temp;

    cout << pT << endl; // prints z'B�Y�  in  char array  it will stop the pointer when it will find \0 else it will not stop

    return 0;
}