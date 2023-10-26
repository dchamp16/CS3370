#include <iostream>
#include <string>
#include <format>
#include <vector>
#include <array>
using namespace std;

int main()
{
    array<int, 10> fooArr{1, 2, 3, 4, 5};
    fooArr[5] = 90;

    for (int a : fooArr)
    {
        cout << "size: " << sizeof(a) << " value: " << a << " location: " << &a << endl;
    }
    return 0;
}

// Main GRAVEYARD

// int main()
// {
//     // initialize a vector of integers with the values {1, 2, 3, 4, 5}
//     vector<int> numbers = {1, 2, 3, 4, 5};
//     numbers.push_back(10);

//     if (!numbers.empty())
//     {
//         for (int num : numbers)
//         {
//             cout << num << endl;
//         }
//     }

//     // print the memory address of the first element in the vector to the console
//     cout << "length:\n"
//          << numbers.size() << endl;

//     // return 0 to indicate successful program execution
//     return 0;
// }
/*
template <typename T>
struct equalTo
{
    bool operator()(T a, T b)
    {
        return a == b;
    }
};

int main()
{
    equalTo<double> intEqual;
    std::cout << intEqual(1, 2) << std::endl; // prints "0"
    std::cout << intEqual(2, 2) << std::endl; // prints "1"
    return 0;
}
*/
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
