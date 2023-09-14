#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Foo
{
public:
    static int n;
};
// int Foo::n
int *test = &Foo::n;
int main()
{
    cout << test << endl;
    return 0;
}

// Main GRAVEYARD

// union student
// {
//     int roll_no;
//     int phone_number;
//     char name[30];
// };

// int main()
// {
//     union student p1;
//     p1.roll_no = 1;
//     p1.phone_number = 1234567822;
//     strcpy(p1.name, "Brown");
//     cout << "roll_no : " << p1.roll_no << endl;
//     cout << "phone_number : " << p1.phone_number << endl;
//     cout << "name : " << p1.name << endl;

//     // int x = 7;
//     // char *p = reinterpret_cast<char *>(&x);

//     // cout << &p << endl;

//     return 0;
// }

// ----------------------

// int main()
// {
//     char *foo[2];
//     char s1[] = "Peter", s2[] = "Justin", s3[] = "Ramos";

//     foo[0] = s1;
//     foo[1] = s2;
//     foo[2] = s3;
//     // (s1)++;
//     cout << s1 << endl;

//     int *p = new int;

//     delete p;

//     int *q = new int[5];

//     delete[] q;
//     return 0;
// }
