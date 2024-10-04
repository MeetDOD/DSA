#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    cout << "The vector is : " << endl;

    v.push_back(1);
    v.push_back(11);
    v.push_back(111);
    v.push_back(1111);
    v.push_back(11111);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl
         << endl;

    cout << "Capacity is : " << v.capacity() << endl;

    cout << "Size is : " << v.size() << endl;

    cout << "Element at index 2 is : " << v.at(2) << endl;

    cout << "Front is : " << v.front() << endl;
    cout << "Back is : " << v.back() << endl
         << endl;

    cout << "After poping : " << endl;

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl
         << endl;

    v.clear();
    cout << "After Clearing " << endl;
    cout << "Size is : " << v.size() << endl;
    cout << "Capacity is : " << v.capacity() << endl;

    return 0;
}