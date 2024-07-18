#include <iostream>
using namespace std;

class Player
{

private:
    int health;

public:
    char name;
    int level;

    void print()
    {
        cout << "The player name is : " << name << "level is : " << level << "Health is : " << health << endl;
    }

    // with the help of getter and setter function we can read and manipulate the private variable.

    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }

    char getName()
    {
        return name;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(int l)
    {
        level = l;
    }

    void setName(char n)
    {
        name = n;
    }
};

// Padding is the technique of adding extra bytes to a structure or class to align its data members to specific boundaries.

// Greedy alignment is a technique used to minimize padding by ordering the data members of a class in decreasing order of size.

int main()
{

    // Player p; //Static allocation
    Player *p = new Player; // Dynamic allocation

    // p.setLevel(99);
    p->setLevel(99);

    // cout<<"Player DA health is : "<<(*p).level<<endl;
    // cout<<"Player DA health is : "<<p->level<<endl;
    // cout<<"Player SA health is : "<<p.level<<endl;

    // cout<<"The player health is : "<<*p.getHealth()<<endl;

    return 0;
}