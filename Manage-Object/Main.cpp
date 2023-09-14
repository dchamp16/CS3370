#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Member1
{
public:
    Member1()
    {
        cout << "from Member1" << endl;
    }
};

class Member2
{
public:
    Member2()
    {
        cout << "from Member2" << endl;
    }
};

class Wrapp
{
public:
    Wrapp()
    {
        cout << "\n**from Wrapp**" << endl;
        Member1();
        Member2();
        cout << "---------" << endl;
    }
};

int main()
{
    Member1 m1;
    Member2 m2;
    Wrapp foo;
    return 0;
}

// Main GRAVEYARD
