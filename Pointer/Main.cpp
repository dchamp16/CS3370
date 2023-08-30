#include <iostream>
#include <typeinfo>

using namespace std;

#define type(x) cout << #x " = " << typeid(x).name() << endl;
#define bytes(x) cout << "sizeof " #x " = " << sizeof x << endl;
#define describe(x) type(x) bytes(x)

class C
{
public:
    void f() { std::cout << "C::f\n"; } // Miyembro na function na f()
    void g() { std::cout << "C::g\n"; } // Miyembro na function na g()
};

int main()
{

    C c;

    void (C::*pmf)() = &C::f;
    (c.*pmf)();
    c.f();

    // Question 1.
    // int a[] = {10, 15, 4, 25, 3, -4};
    // int *p = &a[2]; // element #2 == 4

    // cout << p << "\t" << *p << "\t" << *(p) << endl;

    // cout << "\na. *(p+1): " << *(p + 1)
    //      << "\nb. *p[-1]:  " << p[-1]
    //      << "\nc. p - a: " << p - a
    //      << "\nd. a[*p++]: " << a[*p++]
    //      << "\ne. *(a+a[2]): " << *(a + a[2]) << endl;

    // char s[] = "desolate";
    // char *p = s;

    // cout << s << endl; // output: d
    // cout << *(p++) << endl; //output: d
    // cout << (*p)++ << endl; //output: d
    // cout << *++p << endl; //output: e
    // cout << *(++p) << endl; //output: e
    // cout << ++*p << endl; //output: e
    // cout << ++(*p) << endl; //output: e
    // cout << s << endl; //output: desolate

    // -------------

    // int a[2][3][4][5] = {
    //     {
    //         {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}},
    //         {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}},
    //         {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}},
    //     },
    //     {
    //         {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}},
    //         {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}},
    //         {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}},
    //     }};

    // describe(a);
    // type(a + 1);
    // describe(a[1]);
    // type(a[1] + 1);
    // describe(a[1][1]);
    // type(a[1][1] + 1);
    // describe(a[1][1][1]);
    // type(a[1][1][1] + 1);
    // describe(a[1][1][1][1]);
    // cout << a[1][1][1][1] << endl;

    return 0;
}
