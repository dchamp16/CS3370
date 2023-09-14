#include <new>
#include <iostream>
#include <string>
using namespace std;

class ComplexThing
{
    int m;
    string s;

public:
    ComplexThing(int i = 0, string str = "") : m(i), s(str)
    {
        cout << "ComplexThing(" << m << ", " << s << ") initialized\n";
    }
    ~ComplexThing()
    {
        cout << "ComplexThing(" << m << ", " << s << ") destroyed\n";
    }
    friend ostream &operator<<(ostream &os, const ComplexThing &t)
    {
        return os << '(' << t.m << ',' << t.s << ')';
    }
};

// Overload operator new for placement new with additional int and string arguments
void *operator new(size_t size, void *addr, int i, const string &str)
{
    new (addr) ComplexThing(i, str); // Calls the constructor with extra args
    return addr;
}

int main()
{
    char storage[sizeof(ComplexThing) * 3];

    // Using our multi-arg placement new
    for (int i = 0; i < 3; ++i)
    {
        new (storage + i * sizeof(ComplexThing), i + 1, "string" + to_string(i + 1)) ComplexThing;
    }

    // Display them
    for (int i = 0; i < 3; ++i)
    {
        cout << *reinterpret_cast<ComplexThing *>(storage + i * sizeof(ComplexThing)) << '\n';
    }

    // Manual cleanup
    for (int i = 2; i >= 0; --i)
    {
        reinterpret_cast<ComplexThing *>(storage + i * sizeof(ComplexThing))->~ComplexThing();
    }

    return 0;
}
