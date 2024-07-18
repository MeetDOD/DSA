#include <iostream>
using namespace std;

void car(int src, int dest)
{

    cout << "The source is => " << src << " The Destination => " << dest << endl;
    if (src == dest)
    {
        cout << "Pouch gaya bhai !" << endl;
        return;
    }

    src++;
    car(src, dest);
}

int main()
{
    int source = 1;
    int destination = 10;

    cout << endl;

    car(source, destination);

    return 0;
}