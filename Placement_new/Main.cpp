#include <iostream>
#include <new>
#include <string>

using namespace std;

// Overload the multi-arg version of placement new
void *operator new(size_t size, void *ptr, int x, const std::string &msg)
{
    cout << "Placement new called with int: " << x << " and string: " << msg << endl;
    return ptr;
}

class Thing
{
    int m, n;
    std::string str;

public:
    Thing(int i = 0, int j = 0, const std::string &s = "") : m(i), n(j), str(s)
    {
        cout << "Thing(" << m << "," << n << ") with string '" << str << "' initialized\n";
    }
    ~Thing()
    {
        cout << "Thing(" << m << "," << n << ") with string '" << str << "' destroyed\n";
    }

    friend ostream &operator<<(ostream &os, const Thing &t)
    {
        return os << '(' << t.m << ',' << t.n << ") - " << t.str;
    }
};

int main()
{
    char storage[sizeof(Thing)];

    Thing *p = new (storage, 42, "Hello World!") Thing(1, 2);

    cout << *p << endl;

    p->~Thing();

    return 0;
}
