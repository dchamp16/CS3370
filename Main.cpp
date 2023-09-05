#include <iostream>
#include <string>
using namespace std;

void arrs(int a[]);
void *testFoo(char *dest, char *src);

int main(int argc, char **argv)
{

    char char1{'a'};
    char char2{'b'};

    // int *ptr_char1{&char1};
    // int *ptr_char2{&char2};

    testFoo(char1, char2);
    // int arrays[5]{1, 2, 3, 4, 5};
    // arrs(arrays);
    return 0;
}

// char *strcpy(char *dest, char *src)
// {

//     cout << "*dest++ " << *dest++ << "*src++: " << *src++ << endl;
//     char *temp = dest;
//     while (*dest++ = *src++)
//     {
//         return temp;
//     }
// }
void *testFoo(char *dest, char *src)
{
    cout << "*dest++ " << *dest++ << "*src++: " << *src++ << endl;
}

void arrs(int as[])
{
    // for (auto a : as)
    // {
    //     cout << a << endl;
    // }
}
